/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:07:19 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/19 20:12:43 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
