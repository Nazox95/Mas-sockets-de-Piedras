//Now find
        str_to_number(item.alSockets[2], row[cur++]);

//add after
#ifdef ENABLE_MORE_SOCKETS
        str_to_number(item.alSockets[3], row[cur++]);
        str_to_number(item.alSockets[4], row[cur++]);
        str_to_number(item.alSockets[5], row[cur++]);
#endif

//Now find in void CClientManager::RESULT_SAFEBOX_LOAD(CPeer * pkPeer, SQLMsg * msg)
		char szQuery[512];
		snprintf(szQuery, sizeof(szQuery), 
				"SELECT id, window+0, pos, count, vnum, socket0, socket1, socket2, "
				"attrtype0, attrvalue0, "
				"attrtype1, attrvalue1, "
				"attrtype2, attrvalue2, "
				"attrtype3, attrvalue3, "
				"attrtype4, attrvalue4, "
				"attrtype5, attrvalue5, "
				"attrtype6, attrvalue6 "
//Replace with
#ifdef ENABLE_MORE_SOCKETS
		char szQuery[512];
		snprintf(szQuery, sizeof(szQuery), 
				"SELECT id, window+0, pos, count, vnum, socket0, socket1, socket2, socket3, socket4, socket5 "
				"attrtype0, attrvalue0, "
				"attrtype1, attrvalue1, "
				"attrtype2, attrvalue2, "
				"attrtype3, attrvalue3, "
				"attrtype4, attrvalue4, "
				"attrtype5, attrvalue5, "
				"attrtype6, attrvalue6 "
#else
		char szQuery[512];
		snprintf(szQuery, sizeof(szQuery), 
				"SELECT id, window+0, pos, count, vnum, socket0, socket1, socket2, "
				"attrtype0, attrvalue0, "
				"attrtype1, attrvalue1, "
				"attrtype2, attrvalue2, "
				"attrtype3, attrvalue3, "
				"attrtype4, attrvalue4, "
				"attrtype5, attrvalue5, "
				"attrtype6, attrvalue6 "
#endif
//If you don't want replace, increse socket value, socket2, socket3, socket4, etc.

//Update Fix stones safebox ; find this function
void CClientManager::QUERY_ITEM_SAVE(CPeer * pkPeer, const char * c_pData)
{
        [...]

//Now replace
		char szQuery[512];
		snprintf(szQuery, sizeof(szQuery), 
				"SELECT id, window+0, pos, count, vnum, socket0, socket1, socket2, "
				"attrtype0, attrvalue0, "
				"attrtype1, attrvalue1, "
				"attrtype2, attrvalue2, "
				"attrtype3, attrvalue3, "
				"attrtype4, attrvalue4, "
				"attrtype5, attrvalue5, "
				"attrtype6, attrvalue6 "
//Replace with
#ifdef ENABLE_MORE_SOCKETS
		char szQuery[512];
		snprintf(szQuery, sizeof(szQuery), 
				"SELECT id, window+0, pos, count, vnum, socket0, socket1, socket2, socket3, socket4, socket5 "
				"attrtype0, attrvalue0, "
				"attrtype1, attrvalue1, "
				"attrtype2, attrvalue2, "
				"attrtype3, attrvalue3, "
				"attrtype4, attrvalue4, "
				"attrtype5, attrvalue5, "
				"attrtype6, attrvalue6 "
#else
		char szQuery[512];
		snprintf(szQuery, sizeof(szQuery), 
				"SELECT id, window+0, pos, count, vnum, socket0, socket1, socket2, "
				"attrtype0, attrvalue0, "
				"attrtype1, attrvalue1, "
				"attrtype2, attrvalue2, "
				"attrtype3, attrvalue3, "
				"attrtype4, attrvalue4, "
				"attrtype5, attrvalue5, "
				"attrtype6, attrvalue6 "
#endif

//In the same funcion, find 
        "VALUES(%u, %u, %d, %d, %u, %u, %ld, %ld, %ld, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d)",

//Now replace with
#ifdef ENABLE_MORE_SOCKETS
        "VALUES(%u, %u, %d, %d, %u, %u, %ld, %ld, %ld, %ld, %ld, %ld, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d)",
#else
        "VALUES(%u, %u, %d, %d, %u, %u, %ld, %ld, %ld, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d)",
#endif

//If you don't want replace, you need add %ld the same sockets you have, so,:
                                //1   //2  //3  //4  //5
 "VALUES(%u, %u, %d, %d, %u, %u, %ld, %ld, %ld, %ld, %ld, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d)",
// 1 = socket0 ; 2 = socket1 ; 3 = socket2 ; 4 =socket3 ; 5 = socket4 ; 6 = socket5

//In the same function find
            p->alSockets[0],
            p->alSockets[1],
            p->alSockets[2],
//add
#ifdef ENABLE_MORE_SOCKETS
            p->alSockets[3],
            p->alSockets[4],
            p->alSockets[5],
#endif
