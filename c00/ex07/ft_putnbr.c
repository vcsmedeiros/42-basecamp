#include <unistd.h>
// iterative
void	assign_number(char *number)
{
	int		i;

	i = 0;
	while (i <= 9)
	{
		number[i] = 0;
		i++;
	}
}

int	is_negative(char *number, int nb)
{
	if (nb == -2147483648)
	{
		nb = -2147483647;
		number[9] = 1;
	}
	nb = -nb;
	write(1, "-", 1);
	return (nb);
}

void	convert_int(char *number, int *num_size, int nb)
{
	int	i;

	i = 9;
	while (nb >= 10)
	{
		number[i] = number[i] + (nb % 10) + 48;
		nb = nb / 10;
		i--;
		num_size[0]++;
	}
	number[i] = nb + 48;
	num_size[0]++;
}

void	print_number(char *number, int *num_size)
{
	int	i;

	while (num_size[0] > 0)
	{
		i = 10 - num_size[0];
		write(1, &number[i], 1);
		num_size[0]--;
	}
}

void	ft_putnbr(int nb)
{
	char	number[10];
	int		num_size[1];

	num_size[0] = 0;
	assign_number(number);
	if (nb < 0)
	{
		nb = is_negative(number, nb);
	}
	convert_int(number, num_size, nb);
	print_number(number, num_size);
}
