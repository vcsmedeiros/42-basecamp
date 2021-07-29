void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	resultado;
	int	resto;

	resultado = a / b;
	resto = a % b;
	*div = resultado;
	*mod = resto;
}
