#include "GameObject.h"



GameObject::GameObject()
{
}


GameObject::~GameObject()
{
}

void GameObject::addBehaviour(Behaviour * behaviour)
{
	m_behaviours.push_back(behaviour);
}

void GameObject::update(float deltaTime) {
	for (auto behaviour : m_behaviours)
		behaviour->execute(this, deltaTime);

	//onUpdate(deltaTime);
}