//Search
ITEM_SOCKET_MAX_NUM = 3,

//Now replace with:
#ifdef ENABLE_NEW_SOCKET
  ITEM_SOCKET_MAX_NUM = 6,
#else
  ITEM_SOCKET_MAX_NUM = 3,
#endif
