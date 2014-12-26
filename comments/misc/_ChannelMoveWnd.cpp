char __thiscall sub_674B70(int this)
{
  int v1; // ebx@1
  char result; // al@1
  int v3; // edi@2
  int v4; // esi@2
  int v5; // eax@4
  char v6; // dl@5
  int v7; // ST34_4@6
  unsigned int v8; // ebp@9
  unsigned int v9; // eax@11
  int v10; // ecx@11
  int v11; // ecx@27
  int v12; // ecx@32
  int v13; // eax@42
  int v14; // ST40_4@42
  int v15; // eax@42
  int v16; // eax@43
  int v17; // esi@47
  char v18; // al@49
  int v19; // [sp-20h] [bp-40h]@37
  int v20; // [sp-1Ch] [bp-3Ch]@37
  COLORREF v21; // [sp-18h] [bp-38h]@37
  COLORREF v22; // [sp-14h] [bp-34h]@37
  int v23; // [sp-10h] [bp-30h]@37
  int v24; // [sp-Ch] [bp-2Ch]@37
  int v25; // [sp-8h] [bp-28h]@37
  int v26; // [sp-4h] [bp-24h]@37
  int v27; // [sp+10h] [bp-10h]@2
  signed int v28; // [sp+10h] [bp-10h]@9
  int v29; // [sp+14h] [bp-Ch]@9
  double v30; // [sp+18h] [bp-8h]@39

  v1 = this;
  result = *(_BYTE *)(this + 136);
  if ( result )
  {
    sub_72DEB0();
    v3 = *(_DWORD *)(v1 + 80);
    v4 = *(_DWORD *)(v1 + 84);
    v27 = *(_DWORD *)(dword_7EF97C + 11860) - 1;
    if ( v27 < 0 )
      v27 = 0;
    sub_409290(*(_DWORD *)(dword_7EF97C + 3484), v3 + 23, v4 + 48, 0);
    sub_409250(*(_BYTE *)(dword_7EF97C + 3235), v3 + 38, v4 + 48);
    sub_715D40((HDC)(v3 + 55), v4 + 49, 0xCFC1C3u, 0xCFC1C3u, 0, -1, (int)&dword_76D980, dword_7EF97C + 3196);
    sub_674820(v3 + 77, v4 + 125);
    v5 = dword_7EF97C + 3209;
    do
      v6 = *(_BYTE *)v5++;
    while ( v6 );
    v7 = v3 - 6 * (v5 - (dword_7EF97C + 3210)) + 243;
    sub_46A2F0();
    sub_469930(v7, v4 + 58, dword_7EF97C + 3209, 0);
    sub_715D40((HDC)(v3 + 257), v4 + 58, 0xCFC1C3u, 0xCFC1C3u, 0, 1, (int)&dword_76D980, dword_7EF97C + 3209);
    sub_715D40((HDC)(v3 + 257), v4 + 76, 0xCFC1C3u, 0xCFC1C3u, 0, 1, (int)&dword_76D980, dword_7EF97C + 3222);
    if ( v27 >= 300 )
      sub_715D40((HDC)(v3 + 257), v4 + 94, 0xCFC1C3u, 0xCFC1C3u, 0, 1, (int)dword_7B09DC, v27 / 300);
    else
      sub_715D40((HDC)(v3 + 257), v4 + 94, 0xCFC1C3u, 0xCFC1C3u, 0, 1, (int)dword_7B09E8, v27);
    sub_715D40(
      (HDC)(v3 + 257),
      v4 + 112,
      0xCFC1C3u,
      0xCFC1C3u,
      0,
      1,
      (int)dword_7B09D4,
      *(_DWORD *)(dword_7EF97C + 3500));
    sub_715D40((HDC)(v3 + 257), v4 + 130, 0xCFC1C3u, 0xCFC1C3u, 0, 1, (int)"%d", *(_DWORD *)(dword_7EF97C + 3492));
    sub_715D40((HDC)(v3 + 257), v4 + 148, 0xCFC1C3u, 0xCFC1C3u, 0, 1, (int)"%d", *(_DWORD *)(dword_7EF97C + 3496));
    sub_715D40((HDC)(v3 + 257), v4 + 166, 0xCFC1C3u, 0xCFC1C3u, 0, 1, (int)&dword_76D980, dword_7EF97C + 4052);
    sub_715D40((HDC)(v3 + 257), v4 + 184, 0xCFC1C3u, 0xCFC1C3u, 0, 1, (int)&dword_76D980, dword_7EF97C + 3532);
    sub_715D40((HDC)(v3 + 257), v4 + 201, 0xCFC1C3u, 0xCFC1C3u, 0, 1, (int)&dword_76D980, dword_7EF97C + 3792);
    sub_6749B0(v3, v4);
    sub_715D40((HDC)(v3 + 443), v4 + 56, 0xD5F7FAu, 0xD5F7FAu, 1, 1, (int)"%d", *(_DWORD *)(v1 + 960));
    sub_715D40((HDC)(v3 + 461), v4 + 56, 0xD5F7FAu, 0xD5F7FAu, 1, -1, (int)"%d", *(_DWORD *)(v1 + 964));
    sub_715D40((HDC)(v3 + 443), v4 + 78, 0xD5F7FAu, 0xD5F7FAu, 1, 1, (int)"%d", *(_DWORD *)(v1 + 952));
    sub_715D40((HDC)(v3 + 461), v4 + 78, 0xD5F7FAu, 0xD5F7FAu, 1, -1, (int)"%d", *(_DWORD *)(v1 + 956));
    sub_715D40((HDC)(v3 + 443), v4 + 99, 0xD5F7FAu, 0xD5F7FAu, 1, 1, (int)"%d", v27 % 300);
    sub_715D40(
      (HDC)(v3 + 461),
      v4 + 99,
      0xD5F7FAu,
      0xD5F7FAu,
      1,
      -1,
      (int)"%d",
      *(_DWORD *)(dword_7EF97C + 11860) - *(_DWORD *)(dword_7EF97C + 11868));
    sub_715D40((HDC)(v3 + 480), v4 + 120, 0xD5F7FAu, 0xD5F7FAu, 1, 1, (int)"%d", *(_DWORD *)(dword_7EF97C + 12688));
    sub_715D40((HDC)(v3 + 480), v4 + 141, 0xD5F7FAu, 0xD5F7FAu, 1, 1, (int)&dword_76D980, v1 + 156);
    sub_715D40((HDC)(v3 + 480), v4 + 163, 0x98C902u, 0x98C902u, 1, 1, (int)&dword_76D980, v1 + 416);
    sub_715D40((HDC)(v3 + 382), v4 + 183, 0xE5A60Du, 0xE5A60Du, 1, 1, (int)"%d", *(_DWORD *)(v1 + 936));
    sub_715D40((HDC)(v3 + 420), v4 + 183, 0x131FEu, 0x131FEu, 1, 1, (int)"%d", *(_DWORD *)(v1 + 940));
    sub_715D40((HDC)(v3 + 458), v4 + 183, 0xCCFFu, 0xCCFFu, 1, 1, (int)"%d", *(_DWORD *)(v1 + 944));
    sub_715D40((HDC)(v3 + 495), v4 + 183, 0x98C902u, 0x98C902u, 1, 1, (int)"%d", *(_DWORD *)(v1 + 948));
    sub_715D40((HDC)(v3 + 480), v4 + 205, 0x1488FFu, 0x1488FFu, 1, 1, (int)&dword_76D980, v1 + 676);
    sub_715D40((HDC)(v3 + 456), v4 + 248, 0xD5F7FAu, 0xD5F7FAu, 1, 1, (int)"%d", *(_DWORD *)(dword_7EF97C + 12692));
    sub_715D40((HDC)(v3 + 441), v4 + 270, 0xD5F7FAu, 0xD5F7FAu, 1, 1, (int)"%d", *(_DWORD *)(dword_7EF97C + 12696));
    sub_715D40((HDC)(v3 + 458), v4 + 270, 0xD5F7FAu, 0xD5F7FAu, 1, -1, (int)"%d", *(_DWORD *)(dword_7EF97C + 12700));
    v8 = CFrameTimer::GetTotalSec(dword_76D070) - *(_DWORD *)(dword_7EF97C + 4336);
    v29 = v8 / 0xEA60;
    v28 = 2;
    if ( (unsigned __int8)((int (*)(void))sub_4768A0)() )
      v28 = 4;
    v9 = v28 * v29 / 0x1Eu;
    v10 = *(_DWORD *)(dword_7EF97C + 3236);
    switch ( v10 )
    {
      case 30:
      case 40:
      case 110:
      case 250:
        v11 = 1;
        break;
      case 10:
      case 20:
      case 90:
      case 260:
        v11 = 2;
        break;
      case 50:
      case 80:
      case 100:
      case 270:
        v11 = 3;
        break;
      case 60:
      case 70:
      case 120:
      case 280:
        v11 = 4;
        break;
      default:
        v11 = (*(_DWORD *)(dword_7EF97C + 12760) & 3) + 1;
        break;
    }
    v12 = dword_80DEE8[v11];
    if ( v12 )
    {
      sub_70FDD0(v12, v3 + 137, v4 + 262);
      v9 = v28 * v29 / 0x1Eu;
    }
    if ( dword_80DF08 )
      sub_70FEC0(v3 + 170, v4 + 270, 11, 12, 1, v9, (unsigned __int64)(signed int)v9 >> 32, 0, 10, 0, 100);
    sub_715D40((HDC)(v3 + 118), v4 + 248, 0xEBA800u, 0xEBA800u, 1, 1, (int)"%d", v29);
    if ( (unsigned __int8)sub_4768A0(dword_7EF97C) )
    {
      v26 = v28;
      v25 = (int)"%d";
      v24 = 1;
      v23 = 1;
      v22 = (COLORREF)loc_52CBE7;
      v21 = (COLORREF)loc_52CBE7;
      v20 = v4 + 248;
      v19 = v3 + 199;
    }
    else
    {
      v26 = v28;
      v25 = (int)"%d";
      v24 = 1;
      v23 = 0;
      v22 = 13295103;
      v21 = 13295103;
      v20 = v4 + 248;
      v19 = v3 + 199;
    }
    sub_715D40((HDC)v19, v20, v21, v22, v23, v24, v25, v26);
    v30 = (double)(v8 % 0x1B7740) * 0.0000005555555555555555;
    if ( dword_80DEFC )
    {
      if ( v30 >= 1.0 )
        v30 = 1.0;
      v13 = *(_DWORD *)(dword_80DEFC + 4);
      v14 = *(_DWORD *)(v13 + 44);
      v15 = sub_73FEAC((double)*(signed int *)(v13 + 40) * v30);
      sub_70FDB0(dword_80DEFC, 0, 0, v15, v14);
      sub_70FDD0(dword_80DEFC, v3 + 14, v4 + 271);
    }
    v16 = sub_73FEAC(v30 * 100.0);
    if ( dword_80DF00 && dword_80DF04 )
    {
      if ( v16 > 100 )
        v16 = 100;
      v17 = v4 + 272;
      sub_70FEC0(v3 + 70, v17, 8, 7, 1, v16, (unsigned __int64)v16 >> 32, 2, 7, 0, 100);
      sub_70FDD0(dword_80DF04, v3 + 80, v17);
    }
    if ( *(_BYTE *)(v1 + 996) != (unsigned __int8)sub_4768A0(dword_7EF97C) )
    {
      v18 = sub_4768A0(dword_7EF97C);
      *(_BYTE *)(v1 + 996) = v18;
      if ( v18 )
      {
        sub_72E080(4);
        sub_72E0A0(5);
        return sub_72DA10(v1);
      }
      sub_72E0A0(4);
      sub_72E080(5);
    }
    result = sub_72DA10(v1);
  }
  return result;
}
