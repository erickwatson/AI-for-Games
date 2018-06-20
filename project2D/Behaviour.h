#pragma once
#include "GameObject.h"

class GameObject;

enum eBehaviourResult {
	SUCCESS,
	FAILURE,
	RUNNING
};

class Behaviour
{
public:

	// Empty constructors and destructors for base class
	Behaviour();
	virtual	~Behaviour();

	// Pure virtual function for executing the behaviour
	virtual eBehaviourResult execute(GameObject* gameObject, float deltaTime) = 0;
};

