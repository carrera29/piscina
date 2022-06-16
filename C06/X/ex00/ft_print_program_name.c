/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 09:12:22 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/28 10:16:30 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Aquí estamos hablando de un programa, por lo tanto tendrás que tener una función
main en tu archivo.c.
• Escribe un programa que muestre el nombre del programa.
• Ejemplo:
    $>./a.out
    ./a.out
    $>
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv [0][i] != '\0')
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
