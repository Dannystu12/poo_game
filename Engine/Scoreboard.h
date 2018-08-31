#pragma once
#include "Colors.h"
#include "Graphics.h"
#include "Dude.h"
#include "Graphics.h"

class Scoreboard {
public:
	void Increment();
	void Draw(Graphics & gfx) const;
private:
	int incrementAmount = 3;
	int x = 0;
	int y = 0;
	int score = 0;
	const int height = Dude::GetHeight();
	Color c = Color(0, 255, 0);
};