#include "LevelableEntity.h"
#include<string>

LevelableEntity::LevelableEntity(std::string _name, int _level, 
				int _strength, int _defense, int _speed, 
				int _maxHealth, int _currHealth, int _critRate)
{
	name = _name;
	level = _level;
	strength = _strength;
	defense = _defense;
	speed = _speed;
	maxHealth = _maxHealth;
	currHealth = _currHealth;
	critRate = _critRate;
}

std::string LevelableEntity::getName()
{
	return name;
}

int LevelableEntity::getLevel()
{
	return level;
}

int LevelableEntity::getStrength()
{
	return strength;
}

int LevelableEntity::getDefense()
{
	return defense;
}

int LevelableEntity::getSpeed()
{
	return speed;
}

int LevelableEntity::getMaxHealth()
{
	return maxHealth;
}

int LevelableEntity::getCurrHealth()
{
	return currHealth;
}

int LevelableEntity::getCritRate()
{
	return critRate;
}

void LevelableEntity::setName(std::string newName)
{
	name = newName;
}

void LevelableEntity::levelUp() 
{
	level++;
}

void LevelableEntity::setLevel(int newLevel)
{
	level = newLevel;
}

void LevelableEntity::setStrength(int newStrength)
{
	strength = newStrength;
}

void LevelableEntity::setDefense(int newDefense)
{
	defense = newDefense;
}

void LevelableEntity::setSpeed(int newSpeed)
{
	speed = newSpeed;
}

void LevelableEntity::setMaxHealth(int newMaxHealth)
{
	maxHealth = newMaxHealth;
}

void LevelableEntity::setCurrHealth(int newCurrHealth)
{
	currHealth = newCurrHealth;
}

void LevelableEntity::setCritRate(int newCritRate)
{
	critRate = newCritRate;
}