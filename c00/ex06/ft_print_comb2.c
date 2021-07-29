#include <unistd.h>

void	ft_assign(char *a, char *b, int *c)
{
	a[0] = '0';
	a[1] = '0';
	b[0] = '0';
	b[1] = '1';
	c[0] = 0;
}

void	ft_reset(char *a)
{
	if (a[1] == '9')
	{
		a[0]++;
		a[1] = '0';
	}
	else
		a[1]++;
}

void	ft_putchar(char *a, char *b, int *c)
{
	c[0]++;
	write(1, a, 2);
	write(1, " ", 1);
	write(1, b, 2);
	if (c[0] < 4950)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	num1[2];
	char	num2[2];
	int		counter[1];

	ft_assign(num1, num2, counter);
	while (num1[0] <= '9')
	{
		while (num2[0] <= '9')
		{
			if (num2[0] >= num1[0])
			{
				if (num1[0] != num2[0] || num1[1] < num2[1])
					ft_putchar(num1, num2, counter);
			}
			ft_reset(num2);
		}
		ft_reset(num1);
		num2[0] = '0';
		num2[1] = '1';
	}
}
