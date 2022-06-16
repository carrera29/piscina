/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:51:25 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/28 18:14:22 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	resul;

	resul = nb;
	if (power == 0)
		return (1);
	if (power > 0)
	{
		while (power != 1)
		{
			resul = resul * nb;
			power--;
		}
		return (resul);
	}
	else
		return (0);
}
