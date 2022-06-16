/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 08:17:36 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/28 17:54:41 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Escribe una función que devuelva la raíz cuadrada entera de un número, 
si existe, o 0 si la raíz cuadrada no es entera.
*/
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (nb);
	while (i <= 46341)
	{	
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("la raiz cuadrada es %d\n", ft_sqrt(2147483628));
	return (0);
}
