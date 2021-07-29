unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int 	i;
	unsigned int	lenght;

	i = 0;
	lenght = 0;
	while (src[lenght] != '\0')
		lenght++;
	if (size == 0)
		return (lenght);
	while ((i < (size - 1)) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (lenght);
}
