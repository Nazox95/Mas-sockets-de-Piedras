//Now search something like this (maybe you have different)
if (isSocket)
        {
            iLen += snprintf(szColumns + iLen, sizeof(szColumns) - iLen, ", socket0, socket1, socket2");
            iValueLen += snprintf(szValues + iValueLen, sizeof(szValues) - iValueLen,
                    ", %lu, %lu, %lu", p->alSockets[0], p->alSockets[1], p->alSockets[2]);
            iUpdateLen += snprintf(szUpdate + iUpdateLen, sizeof(szUpdate) - iUpdateLen,
                    ", socket0=%lu, socket1=%lu, socket2=%lu", p->alSockets[0], p->alSockets[1], p->alSockets[2]);
        }

//Now replace with
if (isSocket)
        {
            iLen += snprintf(szColumns + iLen, sizeof(szColumns) - iLen, ", socket0, socket1, socket2, socket3, socket4, socket5");
            iValueLen += snprintf(szValues + iValueLen, sizeof(szValues) - iValueLen,
                    ", %lu, %lu, %lu, %lu, %lu, %lu", p->alSockets[0], p->alSockets[1], p->alSockets[2], p->alSockets[3], p->alSockets[4], p->alSockets[5]);
            iUpdateLen += snprintf(szUpdate + iUpdateLen, sizeof(szUpdate) - iUpdateLen,
                    ", socket0=%lu, socket1=%lu, socket2=%lu, socket3=%lu, socket4=%lu, socket5=%lu", p->alSockets[0], p->alSockets[1], p->alSockets[2], p->alSockets[3], p->alSockets[4], p->alSockets[5]);
        }

//If you don't want replace, only increse the value "socket"
//socket0 <- 1º stone ; socket1 <- 2º stone ; socket2 <- 3º stone ; socket3 <- 4º stone ; etc.
