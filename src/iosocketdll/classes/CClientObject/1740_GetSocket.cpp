int __thiscall CClientObject::GetSocket() //signed/unsigned not known
{
  return *(DWORD *)(this + 8);
}
