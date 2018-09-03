#pragma once
#include "Dude.h"
#include "Graphics.h"

class Poo
{
public:
	void Init(float in_x, float in_y, float in_vx, float in_vy);
	void Update(const Dude& dude, float dt);
	void Draw(Graphics& gfx) const;
	float GetX() const;
	float GetY() const;
	static float GetWidth();
	static float GetHeight();
private:
	float x;
	float y;
	float vx;
	float vy;
	static constexpr float width = 24;
	static constexpr float height = 24;
	bool initialized = false;
};
