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
