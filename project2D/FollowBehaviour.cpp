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



	return eBehaviourResult::SUCCESS;
}