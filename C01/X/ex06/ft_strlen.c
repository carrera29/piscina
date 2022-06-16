/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:34:59 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/17 13:06:36 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*Escribe una función que cuente el número de caracteres de un string y que devuelva
el número encontrado.*/

#include <stdio.h>

int	ft_strlen(char *str)// cuando una función tiene 'int' en lugar de 'void' es porque tiene devolver un valor
{
	int i;

	i = 0; 
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);//este valor se devuelve con return y la variable con el valor en '()'
}

int	main(void)
{
	char	*string;
	string = "cuenta";

	int x;//creo la variable donde se va a volcar el resultado de la función
	
	x = ft_strlen(string);//el puntero de un string no usa '&'
	printf("el numero de caracteres es: %d\n", x);
}
