#pragma once
#include "Dude.h"
#include "Graphics.h"

class Poo
{
public:
	void Init(int in_x, int in_y, int in_vx, int in_vy);
	void Update(const Dude& dude);
	void Draw(Graphics& gfx) const;
	bool IsEaten() const;
	static int GetWidth();
	static int GetHeight();
private:
	int x;
	int y;
	int vx;
	int vy;
	static constexpr int width = 24;
	static constexpr int height = 24;
	bool isEaten = false;
	bool initialized = false;
};
