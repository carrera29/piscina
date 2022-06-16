/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:01:06 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/26 19:07:16 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	resultado;
	int	signo;

	i = 0;
	signo = 1;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signo = signo * -1;
		i++;
	}
	resultado = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		resultado = (resultado * 10) + str[i] - 48;
		i++;
	}
	return (signo * resultado);
}

int	main(void)
{
	printf("%d", ft_atoi("  -+--++--351"));
	return (0);
}