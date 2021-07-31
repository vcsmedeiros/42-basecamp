int ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 1)
		nb *= ft_recursive_factorial(nb-1);
	return nb;
}

/*
#include <stdio.h>
int main()
{
	int n = -12;
	while (n <= 12)
	{
		printf("%d! = %d\n", n, ft_recursive_factorial(n));
		n++;
	}
	return 0;
}
*/