/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 13:11:43 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/26 16:10:43 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Escribe una función iterativa que devuelva un número. Este número será el resultado
de la operación factorial a partir del número usado como parámetro.
• Si el argumento no es válido, la función debe devolver 0.
• No hay que gestionar los “int overflow”, el retorno de la función será indefinido.
*/

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	resul;

	resul = 1;
	if (nb > 0)
	{
		while (nb != 0)
		{
			resul = resul * nb;
			nb--;
		}
		return (resul);
	}
	else
		return (0);
}

int	main(void)
{
	printf("el factorial es %d", ft_iterative_factorial(e));
	return (0);
}
