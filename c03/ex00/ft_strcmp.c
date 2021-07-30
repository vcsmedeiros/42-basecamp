int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	while ((s1[i] == s2[i]) && (s1[i] || s2[i]))
		i++;
	if (s1[i] != s2[i])
		ret = ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (ret);
}
