#pragma once
#include "Dude.h"
#include "Graphics.h"
#include "Vec2.h"

class Poo
{
public:
	void Init(const Vec2& pos_in, const Vec2& vel_in);
	void Update(const Dude& dude, float dt);
	void Draw(Graphics& gfx) const;
	Vec2 GetPos() const;
	static float GetWidth();
	static float GetHeight();
private:
	Vec2 pos;
	Vec2 vel;
	static constexpr float width = 24;
	static constexpr float height = 24;
	bool initialized = false;
};
