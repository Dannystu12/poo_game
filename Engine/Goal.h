#pragma once
#include "Graphics.h"

class Goal {
public:
	Goal(int x, int y, int width, int height);
	void Update();
	void Draw(Graphics & gfx) const;
	void Move(int x, int y);
	int GetX() const;
	int GetY() const;
	int GetWidth() const;
	int GetHeight() const;
private:
	int x;
	int y;
	int width;
	int height;
	Color c = {127, 0, 0 };
	int colorChangeRate = 1;
};