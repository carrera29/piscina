/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:43:45 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/28 15:17:40 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Aquí estamos hablando de un programa, por lo tanto tendrás que tener una función
    main en tu archivo.c.
• Escribe un programa que muestre los argumentos recibidos en la línea de comandos.
• Uno por línea, en orden inverso al de la línea de comandos.
• Debe mostrar todos los argumentos, salvo argv[0].
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	argc = argc - 1;
	while (argc > 0)
	{
		i = 0;
		while (argv[argc][i] != '\0')
		{
			write(1, &argv[argc][i], 1);
			i++;
		}
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
