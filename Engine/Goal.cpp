#include "Goal.h"

Goal::Goal(float x, float y, float width, float height) :
	x(x),
	y(y),
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
			gfx.PutPixel(int(x) + i, int(y) + j, c);
		}
	}
}

void Goal::Move(float x, float y)
{
	this->x = x;
	this->y = y;
}

float Goal::GetX() const
{
	return x;
}

float Goal::GetY() const
{
	return y;
}

float Goal::GetWidth() const
{
	return width;
}

float Goal::GetHeight() const
{
	return height;
}

