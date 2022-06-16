/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:23:00 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/24 14:51:26 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;
	unsigned int	x;

	i = 0;
	while (dest[i] != '\0')
		i++;
	c = 0;
	while (src[c] != '\0')
		c++;
	if (size <= i)
		x = (size + c);
	if (size > i)
		x = (i + c);
	c = 0;
	while ((size - 1) > i && src[c] != '\0')
	{
		dest[i] = src[c];
		c++;
		i++;
	}
	dest[i] = '\0';
	return (x);
}
