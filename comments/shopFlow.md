[Shop Schema]
```SQL
CREATE TABLE db_shop
     (
     id int auto_increment primary key, 
     item_id SMALLINT(4),
     item_days SMALLINT(3),
     cost_cash INT, 
     cost_code INT
    );
```


[Shop Flow]

1 . Get the shop data

```SQL
SELECT cost_cash, cost_code FROM db_shop WHERE item_id = xxx AND item_days = yyy
```
if no rows, then abort

2 . Determine item cost is cash or code
```C++
bool isCashItem;
long itemCost;
while ()
{
  isCashItem = row[0] > 0 ;
  itemCost = isCashItem ? row[0] : row[1];
}
```

3 . Get user inventory data
```SQL
SELECT item_pos FROM db_items WHERE item_owner = "username"
```

if item_len > 96, abort
```C++
	long new_item_pos = -1;
	unsigned char item_len = sizeof(item_pos);
	for (int i = 0; i < item_len; i++)
	{
		std::sort(item_pos, item_pos+item_len); //#include <algorithm>
	}
	if (item_pos[item_len-1] == item_len-1)
		new_item_pos = item_len;
	else
		for (int i = 0; i < item_len; i++)
		{
			if (item_pos[i] > i)
			{
				new_item_pos = i;
				break;
			}
		}
```
4 . get user data
```SQL
SELECT char_cash, char_code FROM db_users WHERE username = "username"
```
test if sufficient cash/code...

```C++
if (isCashItem)
	if (_char_cash < itemCost)
		abort;
	else
		_char_cash -= itemCost;
else
	if (_char_code < itemCost)
		abort;
	else
		_char_code -= itemCost;
```

5 . update user data		
```SQL
UDPATE db_users SET char_cash, char_code VALUES (_char_cash, _char_code) WHERE username = "username"
```
6 . update user inventory
//N.B. make sure item_level and item_skill are defaulted to zero!
```SQL
INSERT INTO db_items (item_id, item_days, item_pos, item_owner) VALUES (_item_id, _item_days, new_item_pos, "username")
```
7 .Done
