#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	char		contador;

	if (n >= 0 && contador <= 9)
	{
		contador = n;
		while (contador >= '0' && contador <= '9') 
		{
			ft_putchar(contador);
			++contador;
		}
	}
}

int	main()
{
	ft_print_combn(5);
	return 0;
}
