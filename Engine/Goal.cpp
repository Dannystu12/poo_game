#include "Goal.h"

Goal::Goal(const Vec2& pos_in, float width, float height) :
	pos(pos_in),
	width(width),
	height(height)
{
}

void Goal::Update()
{
	c.SetR(c.GetR() + colorChangeRate);
	c.SetG(c.GetG() + colorChangeRate * 2);
	c.SetB(c.GetB() + colorChangeRate * 2);
	if (c.GetR() >= 253 || c.GetB() <= 0 || c.GetG() <= 0)
	{
		colorChangeRate *= -1;
	}
}

void Goal::Draw(Graphics & gfx) const
{
	for (int i = 0; i < (int) width; i++)
	{
		for (int j = 0; j < (int) height; j++)
		{
			gfx.PutPixel(int(pos.x) + i, int(pos.y) + j, c);
		}
	}
}

void Goal::Move(const Vec2& pos_in)
{
	pos = pos_in;
}


Vec2 Goal::GetPos() const
{
	return Vec2(pos.x, pos.y);
}

float Goal::GetWidth() const
{
	return width;
}

float Goal::GetHeight() const
{
	return height;
}

