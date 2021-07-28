int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	ucase;

	i = 0;
	ucase = 1;
	while (str[i] != '\0' && ucase == 1)
	{
		if ((str[i] < 65) || (str[i] > 90))
			ucase = 0;
		i++;
	}
	return (ucase);
}
