/*Escribe una función que muestre el número que se ha usado como parámetro. 
La función deberá ser capaz de mostrar todos los valores posibles 
en una variable de tipo int. */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb; //nb = --(+) nb
	}

	if (nb > 9)
	{
		ft_putnbr(nb / 10); // 212 / 10 = 21,2
		/*ft_putnbr llama a la misma función y 
		el resultado de la sivisión (21) vuelve al inicio de la función*/
		nb = nb % 10; // nb (cambio de valor) = resto de 212 / 10 = 2
	}	

	if (nb < 10) // nb = 2; 2 es < 10
	{
		ft_putchar(48 + nb); // 48 ('0' ascii) + 2 = 56 ('2' en ascii)
	}
}

int	main()
{
	ft_putnbr(212);
	return(0);
}