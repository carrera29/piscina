/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:22:34 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/28 16:01:16 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escribe una función recursiva que devuelva el factorial de un número usado como
parámetro.
• Si el argumento no es válido, la función debe devolver 0.
• No hay que gestionar los “int overflow”, el retorno de la función será indefinido.
*/
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if ((nb == 0) || (nb == 1))
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	printf("el factorial es %d", ft_recursive_factorial(5));
	return (0);
}
