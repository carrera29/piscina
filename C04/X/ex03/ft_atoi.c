/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:01:06 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/24 12:05:31 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Escribe una función que convierta el principio del string apuntado por str en un entero
de tipo int
• str puede empezar con un número arbitrario de espacios (tal y como lo define isspace(3))
• str puede ir seguido de un número arbitrario de signos + y de signos -. 
El signo - hará cambiar el signo del entero devuelto en función del número de signos - 
y si este es par o impar.
• str puede ir seguido de cualquier cantidad de númerod de dígitos en base 10
• Tu función tendrá que leer los caracteres de str, siempre que estos cumplan con las reglas
mencionadas anteriormente, y tendrá que devolver el número encontrado hasta entonces.
• No deberías tener en cuenta los desbordamientos (overflows y underflows), en estos casos
el resultado se considera indefinido.
• Puedes comparar tu función con la verdadera función atoi, quitando la parte de los signos
y del overflow.
*/
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	resultado;
	int	signo;

	signo = 1;
	while ((str[i] == ' ') || (str[i] <= 9 && str[i] >= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signo = signo * -1;
		i++;
	}
	resultado = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		resultado = (resultado * 10) + str[i] - 48;
		/* 0 = (0 * 10) + (51 - 48) = 0 + 3 = 3;
		resultado = (3 * 10) + (53 - 48) = 35;
		resultado = (35 * 10) + (49 - 48) = 351; */
		i++;
	}
	return (signo * resultado);
}

int	main(void)
{
	printf("%d", ft_atoi("  -+--++--351"));
	return (0);
}
