/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:25:19 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/28 15:19:32 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int argc, char **argv)
{
	int	c;
	int	i;

	c = 1;
	i = 0;
	while (c < argc)
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
}

void	swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	if (argc > 1)
	{
		c = 1;
		while (c < argc - 1)
		{	
			i = 0;
			while ((argv[c][i] == argv[c + 1][i])
				&& (argv[c][i] != '\0') && (argv[c + 1][i] != '\0'))
				i++;
			if (argv[c][i] != argv[c + 1][i])
			{
				if ((argv[c][i] - argv[c + 1][i]) > 0)
				{
					swap(&argv[c], &argv[c + 1]);
					c = 0;
				}
			}
			c++;
		}
		ft_putchar(argc, argv);
	}
	return (0);
}
