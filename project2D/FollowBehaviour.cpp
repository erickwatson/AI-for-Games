#include "FollowBehaviour.h"



FollowBehaviour::FollowBehaviour()
{
}


FollowBehaviour::~FollowBehaviour()
{
}

eBehaviourResult FollowBehaviour::execute(GameObject* gameObject, float deltaTime) {
	if (m_target == nullptr)
	{
		return eBehaviourResult::FAILURE;
	}

	float x, y;
	float target_x, target_y;

	gameObject->getPosition(&x, &y);
	m_target->getPosition(&target_x, &target_y);
	// Calculate distance and return float m_distance().

	if (m_distance < 0)
		// Get the vector describing the direction of the target and normalise it
		// Move this agent in this direction at the agent's maximum speed


	return eBehaviourResult::SUCCESS;
}