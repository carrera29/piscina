#include <unistd.h>

int	main(void)
{
	char	n;
	char	m;	

	n = 'a';
	while (n <= 'z')
	{
		if (n % 2 == 0)
		{	
			m = n - 32;			
			write(1, &m, 1);
		}
		else
			write(1, &n, 1);
		n++;	
	}
	write(1, "\n", 1);
	return (0);
}
