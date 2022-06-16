/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:29:21 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/17 12:02:19 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* Escribe una función que muestre uno a uno en la pantalla los caracteres de un string.
	La dirección del primer carácter del string está incluida en el puntero utilizado como
	parámetro para la función.
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i; //contador

	i = 0;
	while (str[i] != '\0')// el '\0' está siempre en la ultima posición de un string
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	char	*string;//creo puntero de string
	string = "AlOhA\n";//hago string con valores

	ft_putstr(string);
}
