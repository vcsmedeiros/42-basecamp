char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (dest[l])
		l++;
	while ((i < nb) && (src[i]))
		dest[l++] = src[i++];
	dest[l] = '\0';
	return (dest);
}
