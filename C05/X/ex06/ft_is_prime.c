/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 08:26:14 by clcarre           #+#    #+#             */
/*   Updated: 2022/03/01 09:42:48 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Escribe una función que devuelva 1 si el número es primo y 0 si el número no lo es.
*/
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while ((nb > 1) && (nb / i >= i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_is_prime(992));
	return (0);
}
