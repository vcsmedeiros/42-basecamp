int	ft_atoi(char *str)
{
	unsigned int	i;
	int				signal;
	int				ret_value;

	i = 0;
	signal = 1;
	ret_value = 0;
	while ((9 <= str[i] && str[i] <= 13) || (str[i] == ' '))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signal = -signal;
		i++;
	}
	while (('0' <= str[i]) && (str[i] <= '9'))
	{
		ret_value = (ret_value * 10) + (str[i] - '0');
		i++;
	}
	return (ret_value * signal);
}
