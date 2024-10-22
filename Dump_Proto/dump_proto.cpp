//Now fin in enum EitemMisc and replace:
enum EitemMisc
{
  [...]
#ifdef ENABLE_MORE_SOCKETS 
  ITEM_SOCKET_MAX_NUM            = 6,    //6 Piedras
#else
  ITEM_SOCKET_MAX_NUM            = 3,    //3 Piedras Original
#endif
}
