#include <stdio.h>

/**
 * jack_bauer - prints hours, minutes, seconds in one day
 *
 * Returns: void
 */
void jack_bauer(void)
{
	int seconds;

	for (seconds = 0; seconds < 24 * 60 * 60; seconds += 60)
	{
		int hours = seconds / 3600;
		int minutes = (seconds % 3600) / 60;

		printf("%02d:%02d\n", hours, minutes);
	}
}

