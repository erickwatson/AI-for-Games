#pragma once
#include <vector>
#include "Behaviour.h"
#include "Vector2.h"

class Behaviour;

class GameObject
{
public:
	GameObject();
	virtual ~GameObject();

	// Movement functions
	void setPosition(float x, float y) { m_x = x; m_y = y; }
	void getPosition(float* x, float* y) const { *x = m_x; *y = m_y; }
	Vector2 getPosition()const { return Vector2(m_x, m_y); }
	void translate(float x, float y) { m_x += x; m_y += y; }

	// Add a behaviour
	void addBehaviour(Behaviour* behaviour);

	// Update game object and execute behaviours
	virtual void update(float deltaTime);

protected:

	float m_x, m_y;

	std::vector<Behaviour*> m_behaviours;

};

