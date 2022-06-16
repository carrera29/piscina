/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:07:19 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/19 21:59:37 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	contenedor;

	i = 0;
	while (i < size)
	{	
		contenedor = tab[size - 1];
		tab[size - 1] = tab[i];
		tab[i] = contenedor;
		size--;
		i++;
	}
}

int	main(void)
{
	int arr[] ={ 4, 3, 2, 1, 7};
	int size;

	size = 5;
	ft_rev_int_tab(arr, size);
	for(int i=0; i<size; i++)
		{
			printf("%d", arr[i]);
		}
	return (0);
}