#include <unistd.h>

void	ft_putchar(char *number)
{
	while (number[0] <= '9')
	{
		while (number[1] <= '9')
		{
			while (number[2] <= '9')
			{
				if (number[1] > number[0] && number[2] > number[1])
				{
					write(1, &number[0], 1);
					write(1, &number[1], 1);
					write(1, &number[2], 1);
					if (number[0] != '7')
						write(1, ", ", 2);
				}
				number[2]++;
			}
			number[2] = 0;
			number[1]++;
		}
		number[1] = 0;
		number[0]++;
	}
}

void	ft_print_comb(void)
{
	char	number[3];

	number[0] = '0';
	number[1] = '0';
	number[2] = '0';
	ft_putchar(number);
}
