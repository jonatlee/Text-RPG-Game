#include<string>
#include "LevelableEntity.h"

class Hero : LevelableEntity
{
private:
	int expMultiplier;
	int currExp;
	int expForNextLevel;

public:
	Hero(std::string, int, int, int, int, int, int, int, int, int);
	int expToLevelUp();
	void levelUp();
};