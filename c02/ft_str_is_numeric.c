int	ft_str_is_numeric(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 1;
	while (str[i] != '\0' && num == 1)
	{
		if ((str[i] < 48) || (str[i] > 57))
			num = 0;
		i++;
	}
	return (num);
}
