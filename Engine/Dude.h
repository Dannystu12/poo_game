#pragma once
#include "Keyboard.h"
#include "Graphics.h"
class Poo;

class Dude {
public:
	Dude(float in_x, float in_y);
	float GetX() const;
	float GetY() const;
	static float GetWidth();
	static float GetHeight();
	void Update(const Keyboard& kbd, float dt);
	void ClampToScreen();
	void Draw(Graphics& gfx) const;
	bool IsColliding(float otherX, float otherY, float otherWidth, float otherHeight) const;
private:
	float x;
	float y;
	static constexpr float speed = 1.0f * 60.f;
	static constexpr float width = 20.0f;
	static constexpr float height = 20.0f;
};