#include "Monster.h"

Monster::Monster(std::string _name, int _level,
	int _strength, int _defense, int _speed,
	int _maxHealth, int _critRate,
	int _expMultiplier, std::string _attackName)
	: LevelableEntity(_name, _level,
		_strength, _defense, _speed,
		_maxHealth, _critRate),
	expOnDeath(100 * _expMultiplier * (1 + _level / 10.0)),
	attackName(_attackName)
{
}

int Monster::getExpForKill()
{
	return expOnDeath;
}

std::string Monster::getAttackName()
{
	return attackName;
}

int Monster::calculateRawAttack()
{
	return 1 * getStrength();
}