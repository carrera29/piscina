/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 08:57:45 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/23 17:29:24 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		if ((str[i]) >= 97 && (str[i] <= 122)//si [i] es una minuscula
			&& (str[i - 1] < 97 || str[i - 1] > 122)//y la anterior no es una minúscula 
			&& (str[i - 1] < 65 || str[i - 1] > 90)// y tampoco una mayuscula
			&& (str[i - 1] < 48 || str[i - 1] > 57))// ni un numero
				str[i] -= 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "saLut,       comME56;N;t tu vas ? 4m2ots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s", str);
}