#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i;
	// contador de 's'
	int ii;
	// contador de 'reject'
	/*
	hay que comparar 's' con 'reject' hasta encontrar una coincidencia
	y entonces enviar la posición de la coincidencia en 's'
	*/
	i = 0;
	while (s[i] != '\0')
	{
		ii = 0;
		while (reject[ii] != '\0')
		// compara [i] con todos los caracteres de 'reject'
		{
			if (s[i] == reject[ii])
				return (i);
			ii++;
		}
		i++;
	}
	i = 0;
	//si no encuentra coincidencia devuelve el numero de caracteres de 's'
	while (s[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	printf("%zu", ft_strcspn("123456AB9", "p9N"));
	return (0);
}
