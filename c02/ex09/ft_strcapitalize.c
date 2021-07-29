void	format(char *str, int i, int j)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		if (str[j] >= '0' && str[j] <= '9')
			str[i] = str[i];
		else if (str[j] >= 'A' && str[j] <= 'Z')
			str[i] = str[i];
		else if (str[j] >= 'a' && str[j] <= 'z')
			str[i] = str[i];
		else
			str[i] = str[i] - 32;
	}
	else if (str[i] >= 'A' && str[i] <= 'Z')
	{
		if (str[j] >= '0' && str[j] <= '9')
			str[i] = str[i] + 32;
		else if (str[j] >= 'A' && str[j] <= 'Z')
			str[i] = str[i] + 32;
		else if (str[j] >= 'a' && str[j] <= 'z')
			str[i] = str[i] + 32;
		else
			str[i] = str[i];
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = i - 1;
		format(str, i, j);
		i++;
	}
	return (str);
}
