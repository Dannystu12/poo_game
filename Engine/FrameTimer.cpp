#include "FrameTimer.h"

using namespace std::chrono;

FrameTimer::FrameTimer()
	:
	last(steady_clock::now())
{
}

float FrameTimer::Mark()
{
	const steady_clock::time_point now = steady_clock::now();
	const duration<float> duration = now - last;
	last = now;
	return duration.count();
}
