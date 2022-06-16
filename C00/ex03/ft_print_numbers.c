/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:33:40 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/15 11:08:46 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	inicio;

	inicio = '0';
	while (inicio <= '9')
	{
		write(1, &inicio, 1);
		inicio++;
	}
}
