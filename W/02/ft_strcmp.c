#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] != '\0') && (s1[i] == s2[i]))
			i++;
	return (s1[i] - s2[i]); 
}

int	main(void)
{
	printf("%d", ft_strcmp("hola como estas", "holi"));
	return (0);
}
