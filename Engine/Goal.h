#pragma once
#include "Graphics.h"

class Goal {
public:
	Goal(float x, float y, float width, float height);
	void Update();
	void Draw(Graphics & gfx) const;
	void Move(float x, float y);
	float GetX() const;
	float GetY() const;
	float GetWidth() const;
	float GetHeight() const;
private:
	float x;
	float y;
	float width;
	float height;
	Color c = {127, 0, 0 };
	int colorChangeRate = 1;
};