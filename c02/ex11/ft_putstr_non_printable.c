#include <unistd.h>

void	conversion(char *str)
{
	char	hex[3];
	int		mem;
	int		bug;

	bug = *str;
	if (*str < 0)
		bug = 128 + (*str + 128);
	hex[0] = 92;
	hex[2] = bug % 16;
	if (hex[2] > 9)
		hex[2] = hex[2] + 87;
	else
		hex[2] = hex[2] + 48;
	mem = bug / 16;
	hex[1] = mem % 16;
	if (hex[1] > 9)
		hex[1] = hex[1] + 87;
	else
		hex[1] = hex[1] + 48;
	write(1, hex, 3);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] > 126))
			conversion(&str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
