#include <unistd.h>

void	ft_putchar(int x)
{
	write(1, &x, 1);
}

void	rush(col1up, col2up, col3up, col4up, col1down, col2down, col3down, col4down, row1left, row2left,
row3left, row4left, row1right, row2right, row3right, row4right)
{
	if	((row1left && row1right == 1) || (row2left && row2right == 1) || (row3left && row3right == 1) || (row4left && row4right == 1) || (col1up && col1down == 1) || (col2up && col2down == 1) || (col3up && col3down == 1) || (col4up && col4down == 1))
	if ((col1up == 1 && (col2up || col3up || col4up) == 1) || (col2up == 1 && (col3up || col4up) == 1) || (col3up == 1 && col4up == 1))

	((col1down == 1 && (col2down || col3down || col4down) == 1) || (col2down == 1 && (col3down || col4down) == 1) || (col3down == 1 && col4down == 1))
	((row1left == 1 && (row2left || row3left || row4left) == 1) || (row2left == 1 && (row3left || row4left) == 1) || (row3left == 1 && row4left == 1))
	((row1right == 1 && (row2right || row3right || row4right) == 1) || (row2right == 1 && (row3right || row4right) == 1) || (row3right == 1 && row4right == 1))

	((col1down == 4 && (col2down || col3down || col4down) == 4) || (col2down == 4 && (col3down || col4down) == 4) || (col3down == 4 && col4down == 4))
	((row1left == 4 && (row2left || row3left || row4left) == 4) || (row2left == 4 && (row3left || row4left) == 4) || (row3left == 4 && row4left == 4))
	((row1right == 4 && (row2right || row3right || row4right) == 4) || (row2right == 4 && (row3right || row4right) == 4) || (row3right == 4 && row4right == 4))
		write (1, "ERROR\n", 6);
}

int	main(void)
{
	rush(1, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 1);
	return 0;
}
