//Find
def SetHyperlinkItem(self, tokens):

//Replace
def SetHyperlinkItem(self, tokens):
        minTokenCount = 3 + player.METIN_SOCKET_MAX_NUM
        maxTokenCount = minTokenCount + 2 * player.ATTRIBUTE_SLOT_MAX_NUM
        if tokens and len(tokens) >= minTokenCount and len(tokens) <= maxTokenCount:
            head, vnum, flag = tokens[:3]
            itemVnum = int(vnum, 16)
            metinSlot = [int(metin, 16) for metin in tokens[3:9]]

            rests = tokens[9:]
            if rests:
                attrSlot = []

                rests.reverse()
                while rests:
                    key = int(rests.pop(), 16)
                    if rests:
                        val = int(rests.pop())
                        attrSlot.append((key, val))

                attrSlot += [(0, 0)] * (player.ATTRIBUTE_SLOT_MAX_NUM - len(attrSlot))
            else:
                attrSlot = [(0, 0)] * player.ATTRIBUTE_SLOT_MAX_NUM

            self.ClearToolTip()
            self.AddItemData(itemVnum, metinSlot, attrSlot)

            ItemToolTip.OnUpdate(self)

#If you want Use macro, you can create in ApplicationModule from source binary (for example if app.ENABLE_MORE_SOCKETS:)
#if you don't want replace function, you need change this
            metinSlot = [int(metin, 16) for metin in tokens[3:5]]

            rests = tokens[6:]
#to 
            metinSlot = [int(metin, 16) for metin in tokens[3:9]]

            rests = tokens[9:]
#You can know check your tokens on source binary, you need have the same.
