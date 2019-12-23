#include<string>
#include "LevelableEntity.h"

class Monster : LevelableEntity 
{
private:
	int expOnDeath;
	std::string attackName;

public:
	Monster(std::string, int, int, int, int, int, int, int, std::string);
	int getExpForKill();
	std::string getAttackName();
	int calculateRawAttack();
};