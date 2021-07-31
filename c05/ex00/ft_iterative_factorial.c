int ft_iterative_factorial(int nb)
{
	int factorial;
	if (nb >= 0)
	{
		factorial = 1;
		while (nb > 0)
		{
			factorial = nb * factorial;
			nb--;
		}
		return (factorial);
	}
	return (0);
}

/*
#include <stdio.h>
int main()
{
	int n = -12;
	while (n <= 12)
	{
		printf("%d! = %d\n", n, ft_iterative_factorial(n));
		n++;
	}
	return 0;
}

• Escreva uma função iterativa que retorne um número. Esse número deve ser o
resultado da operação fatorial a partir do número passado como parâmetro.
• Se o argumento não for válido, a função deve retornar 0.
• Não se deve tratar "int overflow", o retorno da função será indefinido.
FATORIAL DE N
	N x N-1 x N-2 x N-3 x ... x 1
*/
