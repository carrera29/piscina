#include <unistd.h>

void	ft_putchar(int i)
{
	if (i > 9)
	{
		ft_putchar(i / 10);
		i = i % 10;
	}
	if (i < 10)
		i = i + 48;
		write(1, &i, 1);
}

int	main(void)
{
	int i;
	
	i = 0;
	while (i <= 99)
	{
		i++;
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
		   write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putchar(i);
		write(1, "\n", 1);
	}
	return (0);
}
