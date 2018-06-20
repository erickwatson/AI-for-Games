#include "FollowBehaviour.h"



FollowBehaviour::FollowBehaviour()
{
}


FollowBehaviour::~FollowBehaviour()
{
}

eBehaviourResult FollowBehaviour::execute(GameObject* gameObject, float deltaTime) {
	if (m_target = nullptr)
	{
		return eBehaviourResult::FAILURE;
	}

}