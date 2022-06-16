/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:23:00 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/24 16:31:41 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i; 
	unsigned int c;
	unsigned int x;

	i = 0;
	while (dest[i] != '\0')
		i++;
	c = 0;
	while (src[c] != '\0')
		c++;
	if (size <= i )// (14 < 16) || (16 = 16)
		x = (size + c);// (14 + 4) || (16 + 4)
	if (size > i )// (20 > 16)
		x = (i + c);// (16 + 4) = (20)
	c = 0;
	while ((size - 1) > i)// ((18 - 1) > 16)
	{
		dest[i] = src[c];
		c++;
		i++;
	}
	dest[i] = '\0';
	return (x);
}

int	main(void)
{
	char	dest[30]= "hola, como estas";
	
	printf("%u\n", ft_strlcat(dest, "gato", 15));
	printf("%s\n", dest);
	return (0);
}
