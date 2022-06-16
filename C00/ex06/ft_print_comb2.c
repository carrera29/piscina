/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 08:47:04 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/15 11:54:03 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write (1, &a, 1);
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
			ft_putchar(48 + primeros / 10);
			ft_putchar(48 + primeros % 10);
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
