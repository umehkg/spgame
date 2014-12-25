signed int __stdcall sub_4037D0(HWND hWnd, signed int Msg, WPARAM wParam, unsigned int lParam)
{
  UINT v4; // esi@1
  WPARAM v5; // edi@1
  HWND v6; // ST20_4@1
  int v7; // ST24_4@1
  signed int result; // eax@8
  char v9; // al@9
  int v10; // eax@22
  char v11; // cl@23
  const CHAR *v12; // edi@24
  char *v13; // esi@24
  signed int v14; // ecx@24
  bool v15; // zf@24
  int v16; // eax@33
  int v17; // eax@37
  int v18; // eax@39
  HDC v19; // esi@45
  HWND v20; // eax@47
  int v21; // eax@61
  char v22; // cl@62
  const CHAR *v23; // edi@63
  __int64 *v24; // esi@63
  signed int v25; // ecx@63
  bool v26; // zf@63
  unsigned __int8 v27; // al@68
  int v28; // [sp-18h] [bp-278h]@45
  int v29; // [sp-14h] [bp-274h]@45
  HDC v30; // [sp-10h] [bp-270h]@45
  int v31; // [sp-Ch] [bp-26Ch]@45
  int v32; // [sp-8h] [bp-268h]@45
  int v33; // [sp-4h] [bp-264h]@5
  DWORD v34; // [sp-4h] [bp-264h]@45
  HGDIOBJ v35; // [sp-4h] [bp-264h]@50
  __int64 v36; // [sp+Ch] [bp-254h]@11
  char v37; // [sp+14h] [bp-24Ch]@67
  int v38; // [sp+15h] [bp-24Bh]@21
  int v39; // [sp+19h] [bp-247h]@21
  char v40; // [sp+1Dh] [bp-243h]@68
  char v41; // [sp+20h] [bp-240h]@29
  char v42; // [sp+21h] [bp-23Fh]@29
  __int16 v43; // [sp+145h] [bp-11Bh]@68
  char v44; // [sp+147h] [bp-119h]@68
  __int16 v45; // [sp+149h] [bp-117h]@29
  char v46; // [sp+14Bh] [bp-115h]@29
  CHAR String; // [sp+150h] [bp-110h]@20
  char v48; // [sp+151h] [bp-10Fh]@20
  __int16 v49; // [sp+251h] [bp-Fh]@20
  char v50; // [sp+253h] [bp-Dh]@20
  int v51; // [sp+25Ch] [bp-4h]@1

  v4 = Msg;
  v5 = wParam;
  v51 = dword_7ED190;
  sub_724170(hWnd, Msg);
  if ( sub_723F90(v6, v7, wParam, lParam) )
    return 0;
  if ( (unsigned int)Msg > 0x111 )
  {
    if ( (unsigned int)Msg <= 0x204 )
    {
      if ( Msg == 516 )
      {
        sub_7294E0((unsigned __int16)lParam, lParam >> 16);
        return 0;
      }
      switch ( Msg )
      {
        case 274:
          switch ( wParam & 0xFFF0 )
          {
            case 0xF040u:
            case 0xF050u:
            case 0xF090u:
            case 0xF100u:
              return 0;
            default:
              return DefWindowProcA(hWnd, v4, v5, lParam);
          }
          return DefWindowProcA(hWnd, v4, v5, lParam);
        case 515:
          sub_7295F0((unsigned __int16)lParam, lParam >> 16);
          return 0;
        case 513:
          sub_7293B0((unsigned __int16)lParam, lParam >> 16);
          return 0;
        case 514:
          sub_729450((unsigned __int16)lParam, lParam >> 16);
          return 0;
        case 512:
          sub_729670((unsigned __int16)lParam, lParam >> 16);
          return 0;
        default:
          return DefWindowProcA(hWnd, v4, v5, lParam);
      }
      return DefWindowProcA(hWnd, v4, v5, lParam);
    }
    if ( (unsigned int)Msg <= 0x40B )
    {
      if ( Msg == 1035 )
      {
        CClientTCPSocket::EvaluateSocket(&off_800518);
      }
      else
      {
        if ( Msg == 517 )
        {
          sub_729580((unsigned __int16)lParam, lParam >> 16);
          return 0;
        }
        if ( Msg == 1034 )
          CClientTCPSocket::EvaluateSocket(&off_7F3C38);
      }
      return DefWindowProcA(hWnd, v4, v5, lParam);
    }
    if ( Msg == 1037 )
    {
      sub_70AD90(wParam, lParam);
      return DefWindowProcA(hWnd, v4, v5, lParam);
    }
    if ( Msg != 1127 || !dword_7EF9A8 && (BYTE3(v36) = 0, !(unsigned __int8)sub_403610((char *)&v36 + 3)) )
      return DefWindowProcA(hWnd, v4, v5, lParam);
    sub_4035D0(1);
    v33 = (int)"EXIT : SHIFT+F4 DOWN";
LABEL_14:
    CLog::PrintTimeAndLog(dword_76D3B4, 0, v33);
    return DefWindowProcA(hWnd, v4, v5, lParam);
  }
  if ( Msg == 273 )
  {
    if ( (_WORD)wParam != 100 || wParam >> 16 )
      sub_724B90(lParam, wParam);
    else
      sub_47F7D0(0);
    return DefWindowProcA(hWnd, v4, v5, lParam);
  }
  switch ( Msg )
  {
    case 30:
      v33 = (int)"HACK: TIMECHANGE - SpeedHack program confirmed.";
      goto LABEL_14;
    case 131:
    case 134:
      if ( !byte_7EBEE8 && !(unsigned __int8)sub_721050() )
        return DefWindowProcA(hWnd, v4, v5, lParam);
      return 0;
    case 28:
      v9 = sub_70B020();
      if ( wParam == 1 )
      {
        if ( !v9 )
        {
          BYTE3(v36) = 0;
          if ( (unsigned __int8)sub_403610((char *)&v36 + 3) )
            ShowWindow((HWND)::wParam, 3);
        }
        v33 = (int)"WM_ACTIVATEAPP - TRUE";
        goto LABEL_14;
      }
      if ( v9 || (BYTE3(v36) = 0, !(unsigned __int8)sub_403610((char *)&v36 + 3)) )
        return DefWindowProcA(hWnd, v4, v5, lParam);
      if ( dword_7E00D0 != 4 && dword_7E00D0 != 3 )
      {
        ShowWindow((HWND)::wParam, 6);
LABEL_31:
        CLog::PrintTimeAndLog(dword_76D3B4, 0, "WM_ACTIVATEAPP - FALSE");
        return DefWindowProcA(hWnd, v4, v5, lParam);
      }
      String = 0;
      memset(&v48, 0, 0x100u);
      v49 = 0;
      v50 = 0;
      sub_402540(&String);
      ShowWindow((HWND)::wParam, 3);
      sub_659BA0(0, 0, 0, "(%s)\n¦-++¦++Ñ+¦ +¡¦-+¦ +¦¦a++\n¦µ¦+¦-¦f ++++¦-¦+.\n¦-++¦++Ñ++ -++ß ¦+-++++S.", &String);
      if ( (unsigned __int8)sub_402170() )
      {
        v5 = wParam;
        goto LABEL_31;
      }
      CLog::PrintTimeAndLog(dword_76D3B4, 0, "Window Active False");
      sub_4035D0(1);
      *(_DWORD *)((char *)&v36 + 5) = 0;
      v38 = 0;
      v39 = 0;
      BYTE4(v36) = 0;
      if ( dword_7EF97C )
      {
        v10 = dword_7EF97C + 3196;
        do
        {
          v11 = *(_BYTE *)v10;
          *((_BYTE *)&v36 + v10 - dword_7EF97C - 3192) = *(_BYTE *)v10;
          ++v10;
        }
        while ( v11 );
      }
      v12 = &Default;
      v13 = (char *)&v36 + 4;
      v14 = 1;
      v15 = 1;
      do
      {
        if ( !v14 )
          break;
        v15 = *v13++ == *v12++;
        --v14;
      }
      while ( v15 );
      if ( v15 )
      {
        *(__int64 *)((char *)&v36 + 4) = qword_76DC60;
        BYTE3(v38) = byte_76DC68;
      }
      v41 = 0;
      memset(&v42, 0, 0x128u);
      v45 = 0;
      v46 = 0;
      sub_73F204(&v41, "Window Active False %d", dword_7E00D0);
      sub_4031C0(0, -1, (char *)&v36 + 4, &v41);
      return 0;
    case 5:
      if ( wParam == 1 )
      {
        v16 = sub_728030();
        sub_726D00(v16);
        CLog::PrintTimeAndLog(dword_76D3B4, 0, "WM_SIZE - MIN");
        byte_7E00D4 = 0;
        result = 0;
      }
      else
      {
        if ( wParam == 2 )
        {
          if ( !dword_7E00D0 )
          {
            if ( sub_659B50() )
            {
              v17 = sub_72DA80(2);
              if ( v17 )
              {
                if ( (unsigned __int8)sub_62E1A0(v17) )
                {
                  v18 = sub_728030();
                  sub_727C00(v18);
                }
              }
            }
          }
          CLog::PrintTimeAndLog(dword_76D3B4, 0, "WM_SIZE - MAX");
          byte_7E00D4 = 1;
        }
        result = 0;
      }
      return result;
    case 3:
      GetClientRect(hWnd, &Rect);
      dword_76D42C(hWnd, &Rect);
      dword_76D42C(hWnd, &Rect.right);
      return 0;
    case 43:
      if ( wParam == 100 )
      {
        v19 = CreateCompatibleDC(*(HDC *)(lParam + 24));
        v20 = *(HWND *)(lParam + 20);
        if ( ::hWnd != v20 )
        {
          ::hWnd = *(HWND *)(lParam + 20);
          dword_7EF9CC = GetWindowLongA(v20, -4);
          SetWindowLongA(::hWnd, -4, (LONG)sub_402460);
        }
        if ( *(_BYTE *)(lParam + 16) & 1 )
        {
          v35 = (HGDIOBJ)dword_7EE0E8;
        }
        else
        {
          if ( byte_7EF9C8 )
          {
            SelectObject(v19, dword_7EE0EC);
            v34 = 13369376;
            v32 = 0;
            v31 = 0;
            v30 = v19;
            v29 = 50;
            v28 = 37;
            goto LABEL_46;
          }
          v35 = dword_7EE0E4;
        }
        SelectObject(v19, v35);
        v34 = 13369376;
        v32 = 0;
        v31 = 0;
        v30 = v19;
        v29 = 50;
        byte_7EF9C8 = 0;
        v28 = 37;
      }
      else
      {
        if ( wParam != 101 )
          return DefWindowProcA(hWnd, v4, v5, lParam);
        v19 = CreateCompatibleDC(*(HDC *)(lParam + 24));
        SelectObject(v19, h);
        v34 = 13369376;
        v32 = 0;
        v31 = 0;
        v30 = v19;
        v29 = 50;
        v28 = 772;
      }
LABEL_46:
      BitBlt(*(HDC *)(lParam + 24), 0, 0, v28, v29, v30, v31, v32, v34);
      DeleteDC(v19);
      v4 = Msg;
      v5 = wParam;
      return DefWindowProcA(hWnd, v4, v5, lParam);
    case 74:
      if ( !lParam )
      {
        sub_4035D0(1);
        BYTE3(v36) = 0;
        if ( (unsigned __int8)sub_403610((char *)&v36 + 3) )
          sub_73F610(0);
      }
      if ( *(_DWORD *)lParam == 1128 )
      {
        if ( **(_DWORD **)(lParam + 8) == 38 * dword_7EF9C0 )
        {
          dword_7EF9BC = 0;
        }
        else
        {
          CLog::PrintTimeAndLog(dword_76D3B4, 0, "Not Protect!!");
          *(__int64 *)((char *)&v36 + 1) = 0i64;
          LOBYTE(v36) = 0;
          v38 = 0;
          if ( dword_7EF97C )
          {
            v21 = dword_7EF97C + 3196;
            do
            {
              v22 = *(_BYTE *)v21;
              *((_BYTE *)&v36 + v21 - dword_7EF97C - 3196) = *(_BYTE *)v21;
              ++v21;
            }
            while ( v22 );
          }
          v23 = &Default;
          v24 = &v36;
          v25 = 1;
          v26 = 1;
          do
          {
            if ( !v25 )
              break;
            v26 = *(_BYTE *)v24 == *v23;
            v24 = (__int64 *)((char *)v24 + 1);
            ++v23;
            --v25;
          }
          while ( v26 );
          if ( v26 )
          {
            v36 = qword_76DC60;
            v37 = byte_76DC68;
          }
          BYTE3(v39) = 0;
          memset(&v40, 0, 0x128u);
          v43 = 0;
          v44 = 0;
          v27 = sub_4035A0(dword_7EF9A8);
          sub_73F204(
            (char *)&v39 + 3,
            "[%d][%s][%d][%d][%d] IOPROTECT NOT FIND KEY!",
            dword_7E00D0,
            "01dSD#$fZd0$182TT$#DZGS@&399433176108700",
            v27,
            hWnd,
            dword_7EF9BC);
          sub_4031C0(0, -1, &v36, (char *)&v39 + 3);
          sub_4035D0(1);
          v4 = Msg;
          v5 = wParam;
        }
      }
      return DefWindowProcA(hWnd, v4, v5, lParam);
    case 123:
      return 1;
    case 2:
      sub_422470(&off_80C560);
      if ( dword_7EF9B4 )
      {
        (**(void (__cdecl ***)(_DWORD))dword_7EF9B4)(1);
        dword_7EF9B4 = 0;
      }
      sub_70B630();
      sub_401E90();
      sub_724290(&off_7EBEE0);
      PostQuitMessage(0);
      return 0;
    case 20:
      return 0;
    default:
      return DefWindowProcA(hWnd, v4, v5, lParam);
  }
}
