/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 08:59:12 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/22 10:56:19 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escribe una función que muestre una secuencia de caracteres en la pantalla. 
// Si esta secuencia contiene caracteres no imprimibles, deberán ser mostrados 
// en formato hexadecimal (en minúsculas) precedidos de una barra invertida (backslash)
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || (str[i] == 127))
		{
			ft_putchar(92);
			if (str[i] >= 0 && str[i] <= 9)
			{
				ft_putchar('0');
				ft_putchar(str[i]);
			}
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}
