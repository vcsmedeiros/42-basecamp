int ft_recursive_power(int nb, int power)
{
	if (power == 0 || nb == 1)
		return 1;
	if (power < 0 || nb == 0)
		return 0;

	if (power > 1)
		nb *= ft_recursive_power(nb, power-1);

	return nb;
}

#include <stdio.h>
int main()
{
	printf("%d", ft_recursive_power(2,0));
	return 0;
}
/*
nb = 5
power 2

power > 1
	nb = nb * retorno1

	retorno1
		nb = 5
		power = 1
*/