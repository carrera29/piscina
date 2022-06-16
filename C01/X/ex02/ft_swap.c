/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:10:45 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/16 12:16:44 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	z; //la variable 'z' sirve de contenedor 

	z = *a;
	*a = *b;
	*b = z;
}

int	main(void)
{
	int	x;
	int	y;

	x = 7;
	y = 3;
	printf("%d, %d\n", x, y);
	ft_swap(&x, &y);
	printf("%d, %d\n", x, y);
}
