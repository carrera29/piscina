/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:14:13 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/15 10:21:25 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	inicio;

	inicio = 'a';
	while (inicio <= 'z')
	{
		write(1, &inicio, 1);
		++inicio;
	}
}
