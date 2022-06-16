/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:57:08 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/26 20:01:47 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Escribe una función que devuelva el n-ésimo elemento de la sucesión de Fibonacci; 
El primer elemento de la serie está en el índice 0. 
Consideraremos que la sucesión de Fibonacci comienza por 0, 1, 1, 2.
• No se tendrán que gestionar los overflows.
• Por supuesto, ft_fibonacci tendrá que ser recursiva.
• Si el índice es inferior a 0, la función retornará -1.
*/
#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	a;
	int	b;
	int	c;

	b = 1;
	c = 0;
	if (index >= 0)
	{
		while (index != 1)
		{
			a = b + c;
			c = b;
			b = a;
			index--;
		}
		return (c);
	}
	else
		return (0);
}

int	main(void)
{
	printf("%d\n", ft_fibonacci(7));
	return (0);
}
