#pragma once
#include "Keyboard.h"
#include "Graphics.h"
#include "Vec2.h"
class Poo;

class Dude {
public:
	Dude(const Vec2& pos_in);
	Vec2 GetPos() const;
	static float GetWidth();
	static float GetHeight();
	void Update(const Keyboard& kbd, float dt);
	void ClampToScreen();
	void Draw(Graphics& gfx) const;
	bool IsColliding(const Vec2& otherPos, float otherWidth, float otherHeight) const;
private:
	Vec2 pos;
	static constexpr float speed = 1.0f * 60.f;
	static constexpr float width = 20.0f;
	static constexpr float height = 20.0f;
};