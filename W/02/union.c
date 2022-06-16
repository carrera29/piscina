#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int ii;
	int c;
	int d;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			c = 0;
			while (argv[1][c] != argv[1][i])
				c++;
			if (c == i)
				write(1, &argv[1][i], 1);
		i++;
		}
		ii = 0;
		while (argv[2][ii] != '\0')
		{
			c = 0;
			while (argv[2][ii] != argv[1][c])
				c++;
			if (argv[2][ii] != argv[1][c])
			{
				d = 0;
				while (argv[2][ii] != argv[2][d])
					d++;
				if (ii == d)
					write(1, &argv[2][ii], 1);
			}
		ii++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
