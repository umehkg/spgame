int __cdecl sub_659B50()
{
  int result = 0; // eax@1
  switch ( dword_7E00D0 ) //GameState
  {
    case 0:
      result = dword_810D7C;
      break;
    case 1:
      result = dword_7F3BB0;
      break;
    case 2:
      result = dword_81687C;
      break;
    case 3:
      result = dword_7FFD5C;
      break;
    case 4:
      result = dword_8218B0;
      break;
    case 5:
      result = dword_7FFCC0;
      break;
    default:
  }
  return result;
}
