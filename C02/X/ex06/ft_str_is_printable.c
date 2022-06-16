/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 08:55:54 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/21 11:19:25 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int i; 

	i = 0;
	if (str [i] != '\0')
		while (str[i] != '\0')
		{
			if (str [i] >= 32 && str[i] <= 126) 
				i++;
			else
				return (0);
		}
	return (1);
}

int	main(void)
{
	int x; 

	x = ft_str_is_printable("");
	printf("%d", x);
}
