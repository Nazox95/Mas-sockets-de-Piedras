//Find
    3, // WEAPON_SWORD,
    3, // WEAPON_DAGGER,
    3, // WEAPON_BOW,
    3, // WEAPON_TWO_HANDED,
    3, // WEAPON_BELL,
    3, // WEAPON_FAN,
    3, // WEAPON_CLAW
    0, // WEAPON_ARROW,
    0, // WEAPON_MOUNT_SPEAR

//Replace with:
#ifdef ENABLE_MORE_SOCKETS
    6, // WEAPON_SWORD,
    6, // WEAPON_DAGGER,
    6, // WEAPON_BOW,
    6, // WEAPON_TWO_HANDED,
    6, // WEAPON_BELL,
    6, // WEAPON_FAN,
    6, // WEAPON_CLAW
    0, // WEAPON_ARROW,
    0, // WEAPON_MOUNT_SPEAR
#else
    3, // WEAPON_SWORD,
    3, // WEAPON_DAGGER,
    3, // WEAPON_BOW,
    3, // WEAPON_TWO_HANDED,
    3, // WEAPON_BELL,
    3, // WEAPON_FAN,
    3, // WEAPON_CLAW
    0, // WEAPON_ARROW,
    0, // WEAPON_MOUNT_SPEAR
#endif

//Now find and replace too
#ifdef ENABLE_MORE_SOCKETS
  6, // ARMOR_BODY,
#else
  3, // ARMOR_BODY,
#endif
      
