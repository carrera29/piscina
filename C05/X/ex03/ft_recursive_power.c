/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:44:23 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/26 17:54:29 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Escribe una función recursiva que devuelva una potencia de un número.
• No hay que gestionar los “int overflow”, el retorno de la función será indefinido.
• Hemos decidido que 0 potencia 0 devolverá 1
*/
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (0);
}

int	main(void)
{
	printf("%d\n", ft_recursive_power(4, 3));
	return (0);
}
