/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:04:51 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/16 15:06:03 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//Escribe una función ft_div_mod que tenga el prototipo siguiente:

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	x; //da igual el nombre, coge la variable por la posición
	int	b;
	int	div;
	int	mod;

	x = 42;
	b = 2;
	div = 0; //este valor se verá reescrito por la función al modificarse por puntero

	printf("valor de 'div' antes de pasar a ejecutar la función: %d\n", div);
	ft_div_mod(x, b, &div, &mod);
	printf("resultado de la división: %d\nresto: %d\nx = %d, b = %d\n", div, mod, x, b);
}
