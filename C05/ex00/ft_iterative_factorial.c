/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 13:11:43 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/28 18:13:54 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	resul;

	resul = 1;
	if (nb > 0)
	{
		while (nb != 0)
		{
			resul = resul * nb;
			nb--;
		}
		return (resul);
	}
	else
		return (0);
}
