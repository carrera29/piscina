/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 10:57:12 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/16 11:46:21 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	a;
	int	*nb1;
	int	**nb2;
	int	***nb3;
	int ****nb4;
	int *****nb5;
	int ******nb6;
	int *******nb7;
	int ********final;

	a = 24;
	nb1 = &a;
	nb2 = &nb1;
	nb3 = &nb2;
	nb4 = &nb3;
	nb5 = &nb4;
	nb6 = &nb5;
	nb7 = &nb6;
	final = &nb7;

	ft_ultimate_ft(&final);
	printf("%d\n", a);
}
