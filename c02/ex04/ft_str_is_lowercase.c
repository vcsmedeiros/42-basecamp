int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	lcase;

	i = 0;
	lcase = 1;
	while (str[i] != '\0' && lcase == 1)
	{
		if ((str[i] < 97) || (str[i] > 122))
			lcase = 0;
		i++;
	}
	return (lcase);
}
