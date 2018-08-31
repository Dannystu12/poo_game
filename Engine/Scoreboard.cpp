#include "Scoreboard.h"

void Scoreboard::Increment()
{
	score += incrementAmount;
	if (score >= Graphics::ScreenWidth) {
		score = Graphics::ScreenWidth;
	}
}

void Scoreboard::Draw(Graphics & gfx) const
{
	for (int i = 0; i < score; i++)
	{
		for (int j = 0; j < height; j++)
		{
			gfx.PutPixel(x + i, y + j, c);
		}
	}
}
