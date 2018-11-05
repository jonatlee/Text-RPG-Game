#include "Hero.h"

Hero::Hero(std::string _name, int _level,
	int _strength, int _defense, int _speed,
	int _maxHealth, int _critRate,
	int _expMultiplier, int _startingExp) 
	: LevelableEntity(_name, _level,
		_strength, _defense, _speed,
		 _maxHealth, _critRate),
	expMultiplier(_expMultiplier),
	currExp(_startingExp)
{
}

int Hero::expToLevelUp() {
	return currExp;
}

void Hero::levelUp() {
	while (currExp >= expForNextLevel) {
		setLevel(getLevel() + 1);
		currExp -= expForNextLevel;
		expForNextLevel *= expMultiplier;
	}
}