#pragma once
#include "Keyboard.h"
#include "Graphics.h"
class Poo;

class Dude {
public:
	Dude(int in_x, int in_y);
	int GetX() const;
	int GetY() const;
	static int GetWidth();
	static int GetHeight();
	void Update(const Keyboard& kbd);
	void ClampToScreen();
	void Draw(Graphics& gfx) const;
	bool IsColliding(int otherX, int otherY, int otherWidth, int otherHeight) const;
private:
	int x;
	int y;
	static constexpr int speed = 1;
	static constexpr int width = 20;
	static constexpr int height = 20;
};