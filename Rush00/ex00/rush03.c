/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:10:01 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/12 22:48:18 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush03(int x, int y)
{
	int	conx;
	int	cony;

	if ((x > 32767 || y > 32767)
		write(1, "ERROR\n", 6);
	else
	{
		cony = 0;
		while (cony++ < y)
		{
			conx = 0;
			while (conx++ < x)
			{
				if ((conx == 1) && (cony == 1 || cony == y))
					ft_putchar('A');
				else if ((conx == x) && (cony == 1 || cony == y))
					ft_putchar('C');
				else if ((cony == 1 || cony == y) || (conx == 1 || conx == x))
					ft_putchar('B');
				else
					ft_putchar(' ');
			}
			write(1, "\n", 1);
		}
	}	
}
