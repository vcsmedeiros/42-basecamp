int ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	if (power == 1)
		return (nb);
	nb *= ft_recursive_power(nb, (power - 1));
	return nb;
}

#include <stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	while (n < 5)
	{
		m = 0;
		while (m < 10)
		{
			printf("%d^%d = %d\n", n, m, ft_recursive_power(n,m));
			m++;
		}
		n++;
	}
	return 0;
}