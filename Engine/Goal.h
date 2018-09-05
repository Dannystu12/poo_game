#pragma once
#include "Graphics.h"
#include "Vec2.h"

class Goal {
public:
	Goal(const Vec2& pos_in, float width, float height);
	void Update();
	void Draw(Graphics & gfx) const;
	void Move(const Vec2& pos_in);
	Vec2 GetPos() const;
	float GetWidth() const;
	float GetHeight() const;
private:
	Vec2 pos;
	float width;
	float height;
	Color c = {127, 0, 0 };
	int colorChangeRate = 1;
};