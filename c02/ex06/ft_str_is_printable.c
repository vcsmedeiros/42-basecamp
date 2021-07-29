int	ft_str_is_printable(char *str)
{
	int	i;
	int	able;

	i = 0;
	able = 1;
	while (str[i] != '\0' && able == 1)
	{
		if ((str[i] < 32) || (str[i] > 126))
			able = 0;
		i++;
	}
	return (able);
}
