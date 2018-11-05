#include "Rat.h"

Rat::Rat(int _level) : Monster("Rat", _level,
	1 + _level / 2, 1 + _level / 2, 1 + _level / 2,
	5 + _level, 1, 1, "Bite")
{
}

