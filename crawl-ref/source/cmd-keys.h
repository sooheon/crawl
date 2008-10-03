{'b', CMD_MOVE_DOWN_LEFT},
{'h', CMD_MOVE_LEFT},
{'j', CMD_MOVE_DOWN},
{'k', CMD_MOVE_UP},
{'l', CMD_MOVE_RIGHT},
{'n', CMD_MOVE_DOWN_RIGHT},
{'u', CMD_MOVE_UP_RIGHT},
{'y', CMD_MOVE_UP_LEFT},
{CK_END, CMD_MOVE_DOWN_LEFT},
{CK_LEFT, CMD_MOVE_LEFT},
{CK_DOWN, CMD_MOVE_DOWN},
{CK_UP, CMD_MOVE_UP},
{CK_RIGHT, CMD_MOVE_RIGHT},
{CK_PGDN, CMD_MOVE_DOWN_RIGHT},
{CK_PGUP, CMD_MOVE_UP_RIGHT},
{CK_HOME, CMD_MOVE_UP_LEFT},
{'a', CMD_USE_ABILITY},
{'c', CMD_BUTCHER},
{'d', CMD_DROP},
{'e', CMD_EAT},
{'f', CMD_FIRE},
{'g', CMD_PICKUP},
{'i', CMD_DISPLAY_INVENTORY},
{'m', CMD_DISPLAY_SKILLS},
{'o', CMD_EXPLORE},
{'p', CMD_PRAY},
{'q', CMD_QUAFF},
{'r', CMD_READ},
{'s', CMD_SEARCH},
{'t', CMD_SHOUT},
{'v', CMD_EVOKE},
{'w', CMD_WIELD_WEAPON},
{'x', CMD_LOOK_AROUND},
{'z', CMD_CAST_SPELL},
{'B', CMD_RUN_DOWN_LEFT},
{'H', CMD_RUN_LEFT},
{'J', CMD_RUN_DOWN},
{'K', CMD_RUN_UP},
{'L', CMD_RUN_RIGHT},
{'N', CMD_RUN_DOWN_RIGHT},
{'U', CMD_RUN_UP_RIGHT},
{'Y', CMD_RUN_UP_LEFT},
{CK_SHIFT_END, CMD_RUN_DOWN_LEFT},
{CK_SHIFT_LEFT, CMD_RUN_LEFT},
{CK_SHIFT_DOWN, CMD_RUN_DOWN},
{CK_SHIFT_UP, CMD_RUN_UP},
{CK_SHIFT_RIGHT, CMD_RUN_RIGHT},
{CK_SHIFT_PGDN, CMD_RUN_DOWN_RIGHT},
{CK_SHIFT_PGUP, CMD_RUN_UP_RIGHT},
{CK_SHIFT_HOME, CMD_RUN_UP_LEFT},
{'A', CMD_DISPLAY_MUTATIONS},
{'C', CMD_CLOSE_DOOR},
{'E', CMD_EXPERIENCE_CHECK},
{'F', CMD_THROW_ITEM_NO_QUIVER},
{'G', CMD_INTERLEVEL_TRAVEL},
{CONTROL('G'), CMD_INTERLEVEL_TRAVEL},
{'I', CMD_DISPLAY_SPELLS},
{'M', CMD_MEMORISE_SPELL},
{'O', CMD_OPEN_DOOR},
{'P', CMD_WEAR_JEWELLERY},
{'Q', CMD_QUIVER_ITEM},
{'R', CMD_REMOVE_JEWELLERY},
{'S', CMD_SAVE_GAME},
{'T', CMD_REMOVE_ARMOUR},
{'V', CMD_FULL_VIEW},
{'W', CMD_WEAR_ARMOUR},
{'X', CMD_DISPLAY_MAP},
{'Z', CMD_ZAP_WAND},
{'.', CMD_MOVE_NOWHERE},
{CK_CLEAR, CMD_MOVE_NOWHERE},
{'<', CMD_GO_UPSTAIRS},
{'>', CMD_GO_DOWNSTAIRS},
{'@', CMD_DISPLAY_CHARACTER_STATUS},
{'%', CMD_RESISTS_SCREEN},
{',', CMD_PICKUP},
{':', CMD_MAKE_NOTE},
{'_', CMD_READ_MESSAGES},
{';', CMD_INSPECT_FLOOR},
{'^', CMD_DISPLAY_RELIGION},
{'#', CMD_CHARACTER_DUMP},
{'=', CMD_ADJUST_INVENTORY},
{'?', CMD_DISPLAY_COMMANDS},
{'!', CMD_ANNOTATE_LEVEL},
{'$', CMD_LIST_GOLD},
{CONTROL('D'), CMD_MACRO_ADD},
{'~', CMD_MACRO_ADD},
#ifdef WIZARD
{'&', CMD_WIZARD},
#endif
{'"', CMD_LIST_JEWELLERY},
{'{', CMD_INSCRIBE_ITEM},
{'[', CMD_LIST_ARMOUR},
{']', CMD_LIST_EQUIPMENT},
{'(', CMD_CYCLE_QUIVER_FORWARD},
{')', CMD_LIST_WEAPONS},
{'\\', CMD_DISPLAY_KNOWN_OBJECTS},
{'\'', CMD_WEAPON_SWAP},
{'`', CMD_PREV_CMD_AGAIN},
{'0', CMD_REPEAT_CMD},
{CK_INSERT, CMD_REPEAT_CMD},
{'5', CMD_REST},
{CK_SHIFT_CLEAR, CMD_REST},
{CK_CTRL_CLEAR, CMD_REST},
{CONTROL('B'), CMD_OPEN_DOOR_DOWN_LEFT},
{CONTROL('H'), CMD_OPEN_DOOR_LEFT},
{CONTROL('J'), CMD_OPEN_DOOR_DOWN},
{CONTROL('K'), CMD_OPEN_DOOR_UP},
{CONTROL('L'), CMD_OPEN_DOOR_RIGHT},
{CONTROL('N'), CMD_OPEN_DOOR_DOWN_RIGHT},
{CONTROL('U'), CMD_OPEN_DOOR_UP_LEFT},
{CONTROL('Y'), CMD_OPEN_DOOR_UP_RIGHT},
{CK_CTRL_END, CMD_OPEN_DOOR_DOWN_LEFT},
{CK_CTRL_LEFT, CMD_OPEN_DOOR_LEFT},
{CK_CTRL_DOWN, CMD_OPEN_DOOR_DOWN},
{CK_CTRL_UP, CMD_OPEN_DOOR_UP},
{CK_CTRL_RIGHT, CMD_OPEN_DOOR_RIGHT},
{CK_CTRL_PGDN, CMD_OPEN_DOOR_DOWN_RIGHT},
{CK_CTRL_PGUP, CMD_OPEN_DOOR_UP_RIGHT},
{CK_CTRL_HOME, CMD_OPEN_DOOR_UP_LEFT},
{CONTROL('A'), CMD_TOGGLE_AUTOPICKUP},
{CONTROL('C'), CMD_CLEAR_MAP},
{CONTROL('E'), CMD_FORGET_STASH},
{CONTROL('F'), CMD_SEARCH_STASHES},
{CONTROL('O'), CMD_DISPLAY_OVERMAP},
{CONTROL('P'), CMD_REPLAY_MESSAGES},
{CONTROL('Q'), CMD_QUIT},
{CONTROL('R'), CMD_REDRAW_SCREEN},
{CONTROL('T'), CMD_TOGGLE_FRIENDLY_PICKUP},
{CONTROL('W'), CMD_FIX_WAYPOINT},
{CONTROL('X'), CMD_SAVE_GAME_NOW},
{CONTROL('Z'), CMD_SUSPEND_GAME},
{ESCAPE, CMD_TARGET_CANCEL},
{'x', CMD_TARGET_CANCEL},
#ifdef WIZARD
{'F', CMD_TARGET_WIZARD_MAKE_FRIENDLY},
{'P', CMD_TARGET_WIZARD_BLESS_MONSTER},
{'s', CMD_TARGET_WIZARD_MAKE_SHOUT},
{'g', CMD_TARGET_WIZARD_GIVE_ITEM},
{'m', CMD_TARGET_WIZARD_MOVE},
{'w', CMD_TARGET_WIZARD_PATHFIND},
{'G', CMD_TARGET_WIZARD_GAIN_LEVEL},
{'M', CMD_TARGET_WIZARD_MISCAST},
#endif
{'v', CMD_TARGET_DESCRIBE},
{'?', CMD_TARGET_HELP},
{' ', CMD_TARGET_SELECT}, // XXX hack: can also be CMD_TARGET_CANCEL
{CONTROL('P'), CMD_TARGET_SHOW_PROMPT},
{CONTROL('C'), CMD_TARGET_CYCLE_BEAM},
{':', CMD_TARGET_HIDE_BEAM},
{'!', CMD_TARGET_SELECT},
{'\r', CMD_TARGET_SELECT},
{'5', CMD_TARGET_SELECT},
{'.', CMD_TARGET_SELECT_ENDPOINT},
{'\t', CMD_TARGET_FIND_PORTAL},
{'^', CMD_TARGET_FIND_TRAP},
{'_', CMD_TARGET_FIND_ALTAR},
{'<', CMD_TARGET_FIND_UPSTAIR},
{'>', CMD_TARGET_FIND_DOWNSTAIR},
{CONTROL('F'), CMD_TARGET_CYCLE_TARGET_MODE},
{CONTROL('L'), CMD_TARGET_TOGGLE_MLIST},
{'p', CMD_TARGET_PREV_TARGET},
{'f', CMD_TARGET_MAYBE_PREV_TARGET},
{'t', CMD_TARGET_MAYBE_PREV_TARGET},
{'-', CMD_TARGET_CYCLE_BACK},
{'+', CMD_TARGET_CYCLE_FORWARD},
{'=', CMD_TARGET_CYCLE_FORWARD},
{'/', CMD_TARGET_OBJ_CYCLE_BACK},
{';', CMD_TARGET_OBJ_CYCLE_BACK},
{'*', CMD_TARGET_OBJ_CYCLE_FORWARD},
{'\'', CMD_TARGET_OBJ_CYCLE_FORWARD},
{'b', CMD_TARGET_DOWN_LEFT},
{'h', CMD_TARGET_LEFT},
{'j', CMD_TARGET_DOWN},
{'k', CMD_TARGET_UP},
{'l', CMD_TARGET_RIGHT},
{'n', CMD_TARGET_DOWN_RIGHT},
{'u', CMD_TARGET_UP_RIGHT},
{'y', CMD_TARGET_UP_LEFT},
{CK_END, CMD_TARGET_DOWN_LEFT},
{CK_LEFT, CMD_TARGET_LEFT},
{CK_DOWN, CMD_TARGET_DOWN},
{CK_UP, CMD_TARGET_UP},
{CK_RIGHT, CMD_TARGET_RIGHT},
{CK_PGDN, CMD_TARGET_DOWN_RIGHT},
{CK_PGUP, CMD_TARGET_UP_RIGHT},
{CK_HOME, CMD_TARGET_UP_LEFT},
{'B', CMD_TARGET_DIR_DOWN_LEFT},
{'H', CMD_TARGET_DIR_LEFT},
{'J', CMD_TARGET_DIR_DOWN},
{'K', CMD_TARGET_DIR_UP},
{'L', CMD_TARGET_DIR_RIGHT},
{'N', CMD_TARGET_DIR_DOWN_RIGHT},
{'U', CMD_TARGET_DIR_UP_RIGHT},
{'Y', CMD_TARGET_DIR_UP_LEFT},
{CK_SHIFT_END, CMD_TARGET_DIR_DOWN_LEFT},
{CK_SHIFT_LEFT, CMD_TARGET_DIR_LEFT},
{CK_SHIFT_DOWN, CMD_TARGET_DIR_DOWN},
{CK_SHIFT_UP, CMD_TARGET_DIR_UP},
{CK_SHIFT_RIGHT, CMD_TARGET_DIR_RIGHT},
{CK_SHIFT_PGDN, CMD_TARGET_DIR_DOWN_RIGHT},
{CK_SHIFT_PGUP, CMD_TARGET_DIR_UP_RIGHT},
{CK_SHIFT_HOME, CMD_TARGET_DIR_UP_LEFT},

{CK_MOUSE_MOVE,  CMD_MOUSE_MOVE},
{CK_MOUSE_CLICK, CMD_MOUSE_CLICK},
{CK_MOUSE_MOVE,  CMD_TARGET_MOUSE_MOVE},
{CK_MOUSE_CLICK, CMD_TARGET_MOUSE_SELECT},

{'\0', CMD_NO_CMD}
