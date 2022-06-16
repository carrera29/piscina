/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 08:51:41 by clcarre           #+#    #+#             */
/*   Updated: 2022/03/01 09:43:48 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Escribe una función que devuelva el número primo inmediatamente 
    superior o igual al número usado como parámetro.
*/
#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	while ((nb > 1) && (nb / i >= i))
	{
		if (nb % i == 0)
			nb = nb + 1;
		i++;
	}
	return (nb);
}

int	main(void)
{
	printf("%d\n", ft_find_next_prime(992));
	return (0);
}
