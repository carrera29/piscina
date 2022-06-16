/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:01:53 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/15 09:40:22 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int	contador;
	int	imprimir;

	contador = 0;
	if (n < 10)
	{
		imprimir = n;
		while (n < 10)
		{
			ft_putchar(n);
			n++;
		}
	}

int	main()
{
	ft_print_combn();
	return 0;
}

/#include <unistd.h>

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
