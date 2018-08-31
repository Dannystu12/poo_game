#include "Goal.h"

Goal::Goal(int x, int y, int width, int height) :
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
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++)
		{
			gfx.PutPixel(x + i, y + j, c);
		}
	}
}

void Goal::Move(int x, int y)
{
	this->x = x;
	this->y = y;
}

int Goal::GetX() const
{
	return x;
}

int Goal::GetY() const
{
	return y;
}

int Goal::GetWidth() const
{
	return width;
}

int Goal::GetHeight() const
{
	return height;
}

