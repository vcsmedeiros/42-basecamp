int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				ret;

	i = 0;
	ret = 0;
	while ((s1[i] == s2[i]) && (s1[i] || s2[i]) && (i < (n - 1)))
		i++;
	if ((s1[i] != s2[i]) && (n != 0))
		ret = ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (ret);
}
