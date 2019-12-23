#include<string>

class LevelableEntity {
private:
	std::string name;
	int level;
	int strength;
	int defense;
	int speed;
	int maxHealth;
	int currHealth;
	int critRate;

public:
	LevelableEntity(std::string, int, int, int, int, int, int);
	std::string getName();
	int getLevel();
	int getStrength();
	int getDefense();
	int getSpeed();
	int getMaxHealth();
	int getCurrHealth();
	int getCritRate();
	bool isDead();
	void setName(std::string);
	void levelUp();
	void setLevel(int);
	void setStrength(int);
	void setDefense(int);
	void setSpeed(int);
	void setMaxHealth(int);
	void setCurrHealth(int);
	void takeDamage(int);
	void recoverHealth(int);
	void revive();
	void setCritRate(int);
};