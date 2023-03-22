#include "main.h"

/**
 * times_table - print time table
 */

void times_table(void)
{
	int col, row = 0, re;

	while (row <= 9)
	{
		col = 0;
		while (col <= 9)
		{
			re = row * col;
			if (col == 0)
			{
				putchar('0');
			}
			else
			{
				if (re < 10)
				{
					printf("  %d", re);
				}
				else
				{
					printf(" %d", re);
				}
			}
			if (col != 9)
			{
				putchar(',');
			}
			col++;
		}
		putchar('\n');
		row++;
	}
}
