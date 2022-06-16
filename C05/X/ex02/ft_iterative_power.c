/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:51:25 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/28 16:05:40 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Escribe una función iterativa que devuelva una potencia de un número. Una potencia inferior a 0 devolverá 0.
• No hay que gestionar los “int overflow”, el retorno de la función será indefinido.
• Se ha decidido que 0 potencia 0 devolverá 1
*/
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	resul;

	resul = nb;
	if (power == 0)
		return (1);
	if (power > 0)
	{
		while (power != 1)
		{
			resul = resul * nb;
			power--;
		}
		return (resul);
	}
	else
		return (0);
}

int	main(void)
{
	printf("%d\n", ft_iterative_power(3, 1));
	return (0);
}
