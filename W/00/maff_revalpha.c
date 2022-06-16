#include <unistd.h>

int	main(void)
{
	char l;
	char m;

	l = 'Z';
	while (l >= 'A')
	{
		if (l % 2 == 0)
		{
			m = l + 32;
			write(1, &m, 1);
		}
		else
			write(1, &l, 1);
		l--;		
	}
	write (1, "\n", 1);
	return (0);
}
