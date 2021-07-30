char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while ((str[i + j] == to_find[j]) && (str[i + j]))
		{
			if (!(to_find[j + 1]))
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
