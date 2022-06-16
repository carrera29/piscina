#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	c;
	int x;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	x = c;
	i = 0;
	while (str[i] <= str[x])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	ft_putstr_non_printable("Coucoutu vas bien ?");
}
