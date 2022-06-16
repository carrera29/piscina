/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:38:00 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/23 17:41:21 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* • Escribe una función que cuente el número de caracteres de un string y que devuelva
el número encontrado. */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	int	a;
	
	a = ft_strlen("aloha");
	printf("%d", a);
}
