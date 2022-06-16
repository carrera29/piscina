/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:20:25 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/22 15:15:06 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reproduce el comportamiento de la función strcmp (man strcmp).
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;//para que sume uno más y llegue al caracter NULL
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	printf("%d", ft_strcmp("holi", "hola"));
	return (0);
}
