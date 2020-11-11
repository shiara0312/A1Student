#include "Agent.h"

#include "ResourceManager.h"
#include "Level.h"


Agent::Agent()
{
}

Agent::~Agent()
{
}

void Agent::draw(SpriteBacth& spriteBatch)
{
	static int textureID = 
			ResourceManager::getTexture("Textures/circle.png").id;
	const glm::vec4 uvRect(0.0f, 0.0f, 1.0f, 1.0f);
	glm::vec4 destRect(_position.x, _position.y, AGENT_WIDTH, AGENT_WIDTH);
	spriteBatch.draw(destRect, uvRect, textureID, 0.0f, _color);

}
