#include "holberton.h"

/**
 * jack_bauer -  Prints every minute, 00:00 - 23:59
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hr1 = 0;
	int hr2 = 0;
	int sec1 = 0;
	int sec2 = 0;

	while (hr1 < 3)
	{
		while (hr2 <= 9)
		{	
			if( hr1 == 2 && hr2 ==4) break;	
			while (sec1 < 6)
			{
				while (sec2 <= 9)
				{
					printf("%d%d:%d%d\n", hr1, hr2, sec1, sec2);
					sec2++;					
				}
				sec2 = 0;
				sec1++;		
			}
			sec1 = 0;
			hr2++;
		}
		hr2 = 0;
		hr1++;
	}
}