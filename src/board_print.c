#include "board.h"
#include "board_print.h"
#include "board_print_plain.h"
#include "input.h"

void board_print(char deck[8][8])
{
	char k[] = { '0','r', 'n', 'b', 'q', 'k', 'b', 'n', 'r' };
	for (int s = 1; s < 9; ++s)
	{
		deck[1][s] = k[s];
		deck[8][s] = k[s] - 32;
		deck[2][s] = 'p';
		deck[7][s] = 'P';
		for (int i = 3; i < 7; ++i)
		{
			deck[i][s] = ' ';
		}

	}

}
