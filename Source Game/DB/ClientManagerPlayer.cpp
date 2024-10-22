//Now find
        str_to_number(item.alSockets[2], row[cur++]);

//add after
#ifdef ENABLE_MORE_SOCKETS
        str_to_number(item.alSockets[3], row[cur++]);
        str_to_number(item.alSockets[4], row[cur++]);
        str_to_number(item.alSockets[5], row[cur++]);
#endif

//Now find x2
"SELECT id,window+0,pos,count,vnum,"
"socket0,socket1,socket2,"
"attrtype0,attrvalue0,attrtype1,attrvalue1,attrtype2,attrvalue2,attrtype3,attrvalue3,"
"attrtype4,attrvalue4,attrtype5,attrvalue5,attrtype6,attrvalue6 "
//Replace with
#ifdef ENABLE_MORE_SOCKETS
"SELECT id,window+0,pos,count,vnum,"
"socket0,socket1,socket2,socket3,socket4,socket5,"
"attrtype0,attrvalue0,attrtype1,attrvalue1,attrtype2,attrvalue2,attrtype3,attrvalue3,"
"attrtype4,attrvalue4,attrtype5,attrvalue5,attrtype6,attrvalue6 "
#else
"SELECT id,window+0,pos,count,vnum,"
"socket0,socket1,socket2,"
"attrtype0,attrvalue0,attrtype1,attrvalue1,attrtype2,attrvalue2,attrtype3,attrvalue3,"
"attrtype4,attrvalue4,attrtype5,attrvalue5,attrtype6,attrvalue6 "
#endif
//If you don't want replace, increse socket value, socket2, socket3, socket4, etc.
