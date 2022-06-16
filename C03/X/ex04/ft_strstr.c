/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:22:51 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/24 16:24:55 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//• Reproduce el comportamiento de la función strstr (man strstr).
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;
	int	x;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		c = 0;
		if (str[i] == to_find[c])
		{
			x = i;
			while (str[x] == to_find[c])
			{
				c++;
				if (to_find[c] == '\0')
					return (&str[i]);
				x++;
			}
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("%s", ft_strstr("aaa como abc aabc estas", "abc"));
	return (0);
}
