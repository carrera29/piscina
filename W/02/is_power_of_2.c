int	is_power_of_2(unsigned int n)
{
	int r;
	
	r = 2;
	while (n >= r)
	{
		r = r * 2;
		if (r == n)
			return (1);
	}
	return (0);
}
