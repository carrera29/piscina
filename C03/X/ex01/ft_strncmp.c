/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:20:28 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/24 16:19:06 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (i < n)
	{
		while ((s1[i] != '\0') && (i < n - 1) && (s1[i] == s2[i]))
		{
			i++;
		}
		return (s1[i] - s2[i]);
	}
	else
		return (0);
}

int	main(void)
{
	printf("%d", ft_strncmp("hola ", "hola como va", 5));
	return (0);
}
