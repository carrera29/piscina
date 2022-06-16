/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:38:26 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/23 17:52:18 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Escribe una función que muestre uno a uno en la pantalla los caracteres de una
cadena de caracteres.
• La dirección del primer carácter de la cadena de caracteres está incluida en el
puntero usado como parámetro a la función.
*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	ft_putstr("hola Lulu");
	return (0);
}
