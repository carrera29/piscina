/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:36:28 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/19 22:06:24 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int c;

	i = 0;
	while (i + 1  <= size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			c = tab[i];
			tab[i] = tab[i + 1];
			tab [i + 1] = c;
			i = 0;
		}
		else
			i++;
	}
}

int	main(void)
{
	int arr[] ={ 1, 2, 5, 0};
	int size;

	size = 4;
	ft_sort_int_tab(arr, size);
	for(int i=0; i<size; i++)
		{
			printf("%d", arr[i]);
		}
	return 0;
}
