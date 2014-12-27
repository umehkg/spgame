void sub_6749B0 (long param1, long param2)
{
	unsigned long myInfo = *(unsigned long *)0x7EF97C;
	long playerLevel = *(long *)(myInfo+0xD9C);
	long long playerPoint = *(long long *)(myInfo+0x8);
	long long playerCurrentLevelPoint = 0; //min. point required for current level
	long long playerNextLevelPoint = 0; //min. point required for next level
	long long playerPointRequired = 0; //remaining point required for next level
	double playerPointProgress = 0.0;
	double playerPointProgressPercentage = 0.0;
	if (playerLevel != 32)
	{
		if (playerLevel == 0)
		{
			playerNextLevelPoint = 1;
			playerCurrentLevelPoint = -5;
		}
		else
		{
			playerNextLevelPoint = *(long long *)(myInfo+0x1468);
			if (playerNextLevelPoint == 0)
				playerNextLevelPoint = 1;
			playerCurrentLevelPoint = *(long long *)(myInfo+0x1460);
		}
	}
	else
	{
		playerNextLevelPoint = playerPoint + 1;
		playerCurrentLevelPoint = 0;
	}
	playerPointRequired = playerPoint - playerCurrentLevelPoint;
	if (playerPointRequired < 0)
		playerPointRequired = 0;
	playerPointProgress = double(playerPointRequired)/double(playerNextLevelPoint - playerCurrentLevelPoint);
	if (playerPointProgress > 1.0)
		playerPointProgress = 1.0;
	playerPointPercentage =  playerPointProgress * 100.0;
}
