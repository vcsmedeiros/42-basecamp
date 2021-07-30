int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s_len; // tamanho de src
	unsigned int	d_len; // tamanho de dest
	unsigned int	t_len; // soma de src+dest
	unsigned int	i;     // indice

	i = 0;
	s_len = ft_strlen(src); // tamanho de src até o \0
	d_len = ft_strlen(dest); // tamanho de dest até o \0
	t_len = s_len + d_len; // soma
	if (size > d_len) // se size maior que dest, entra na condição
	{
		while (d_len < size - 1 && src[i]) // enquanto d não for size-1 e enquanto src existir
			dest[d_len++] = src[i++]; // dest recebe src
		dest[d_len] = '\0'; // o ultimo caractere de dest que é dest[size - 1] recebe nulo 
		return (t_len); // retorna o length total, que é igual a size
	}
	return (s_len + size);
}
