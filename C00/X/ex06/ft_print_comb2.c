
/* Escribe una función que muestre todas las combinaciones posibles de 2 números
entre 0 y 99, en orden creciente */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	primeros;
	int	segundos;

	primeros = 0; 
	while (primeros <= 99) 
	{
		segundos = primeros + 1;
		while (segundos <= 99)
		{
			ft_putchar(48 + primeros / 10); //Ej. escribir decenas (0 + 21 = 21; 21 / 10 = 2)
			ft_putchar(48 + primeros % 10); //Ej. escribir unidades (0 + 21 = 21; 21 %(resto) 10 = 1)
			ft_putchar(' ');
			ft_putchar(48 + segundos / 10);
			ft_putchar(48 + segundos % 10);
			if (primeros < 98)
				write(1, ", ", 2);
			segundos++;
		}
		primeros++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
