/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 09:07:13 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/28 09:09:54 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escribe una función que muestre todas las posibilidades de colocar diez damas en
un tablero de 10x10 sin que se puedan alcanzar con una sola jugada y que devuelva
el número de posibilidades.
• Se tendrá que utilizar la recursividad.
• El valor retornado por su función tendrá que ser el número de soluciones mostradas.
• La visualización se hará de la manera siguiente:
	$>./a.out | cat -e
	0257948136 $
	0258693147 $
	...
	4605713829 $
	4609582731 $
	...
	9742051863 $
	$>
• La sucesión se lee de izquierda a derecha. La primera cifra corresponde a la posición
de la primera dama en la primera columna (el índice empieza con 0). La n-ésima
cifra corresponde a la posición de la n-ésima dama en la n-ésima columna.
*/
#include <stdio.h>

int	ft_ten_queens_puzzle(void)
{
	
}

int	main(void)
{
	printf("%d\n", ft_ten_queens_puzzle(void));
	return (0);
}
