/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strlcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 08:58:21 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/23 13:49:10 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;

	c = 0;
	i = 0;
	while (src[c] != '\0')
	{
		c++;//contador para devolver el numero de caracteres del str
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i ++;
		}
		dest[i] = '\0';// el ultimo caracter es sustituido por el final del str
	}
	return (c);
}

int	main(void)
{
	char	dest[20];
	char 	*src;

	src = "hola como va morena";
	int	size;

	printf("Mi contador de src es: %d\n", ft_strlcpy(dest, src, 5));
	printf("Aquí sale el destino: %s\n", dest);
}
