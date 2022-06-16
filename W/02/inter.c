#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int ii;
	int c;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			ii = 0;
			while (argv[2][ii] != '\0')
			{
				if (argv[1][i] == argv[2][ii])
				{
					c = 0;
					while ((argv[1][c] != argv[1][i]) && (argv[2][ii]))
						c++;
					if (i == c)
						write(1, &argv[1][i], 1);
					break;
				}
			ii++;
			}
		i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
