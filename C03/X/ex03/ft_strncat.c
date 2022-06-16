/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:20:31 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/23 12:17:45 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//• Reproduce el comportamiento de la función strncat (man strncat).
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	while ((dest[i] >= 32) && (dest[i] <= 126))
	{
		i++;
	}
	c = 0;
	while ((src[c] != '\0') && (c < nb))
	{
		dest[i] = src[c];
		c++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
    char    v[7] = "hola";
	printf("%s", ft_strncat(v, ", como va", 5));
	return (0);
}
