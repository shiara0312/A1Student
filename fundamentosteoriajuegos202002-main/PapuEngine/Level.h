#pragma once
#include <string>
#include <vector>
#include "SpriteBacth.h"
using namespace std;

const int TILE_WIDTH = 64;
class Level
{
private:
	vector<string> levelData;
	int numHumans;
	void parseLevel();
public:
	glm::vec2 playerPosition;
	vector<glm::vec2> zombiePosition;
	glm::vec2 getPlayerPosition() const {
		return playerPosition;
	}
	std::vector<glm::vec2> getZombiesPosition()const {
		return zombiePosition;
	}
	Level(const std::string& fileName);
	void draw();
	SpriteBacth spriteBatch;
	~Level();
};

