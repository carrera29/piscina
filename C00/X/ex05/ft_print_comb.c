
/*Escribe una función que muestre, en orden creciente, 
todas las combinaciones posibles de tres dígitos distintos en orden creciente 
-sí, la repetición es voluntaria.*/

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48; 
	// utilizo codigo ascii porque no hace cálculo, solo imprime
	while (a < '8') // puedo escribir en codigo ascii o entre '*'
	{	
		b = a + 1;
		while (b < '9')
		{
			c = b + 1; 
			while (c <= '9')
			{
				ft_putchar(a, b, c);
				if (a < '7')
					write(1, ", ", 2);
				++c;
			}
			++b;
		}
		++a;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
