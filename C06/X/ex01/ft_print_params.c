/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 09:22:26 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/28 10:23:59 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Aquí estamos hablando de un programa, por lo tanto tendrás que tener 
    una función main en tu archivo.c.
• Escribe un programa que muestre los argumentos recibidos en la línea de comandos.
• Uno por línea, en el mismo orden que en la línea de comandos.
• Debes mostrar todos los argumentos, salvo argv[0].
• Ejemplo:
    $>./a.out test1 test2 test3
    test1
    test2
    test3
    $>
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	c = 1;
	while ((argc > 1) && (c < argc))
	{
		i = 0;
		while (argv[c][i] != '\0')
		{
			write(1, &argv[c][i], 1);
			i++;
		}
		write(1, "\n", 1);
		c++;
	}
	return (0);
}
