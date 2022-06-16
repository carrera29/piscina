/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:57:08 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/28 16:18:27 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (index);
	if (index == 1)
		return (index);
	return ((ft_fibonacci(index - 1)) + (ft_fibonacci(index - 2)));
}

int	main(void)
{
	printf("%d\n", ft_fibonacci(7));
	return (0);
}
