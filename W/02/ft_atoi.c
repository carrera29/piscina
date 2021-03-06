int	ft_atoi(const char *str)
{
	int i;
	int signo;
	int r;

	i = 0;
	r = 0;
	while (str[i] <= ' ')
		i++;
	if (str[i] == '-')
	{
		signo = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while ((str[i] >= 48 && str[i] <= 57) && (str[i] != '\0'))
	{
		r = (r * 10) + (str[i] - 48);
		i++;
	}
	return (signo * r);
}
