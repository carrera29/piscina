/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:52:53 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/21 08:53:37 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')//mientras el contenido de str[] no sea el final del string
	{
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else 
			return (0);
	}
	return (1);
}

int	main(void)
{
	int x; 

	x = ft_str_is_numeric("998487g");
	printf("%d", x);
}