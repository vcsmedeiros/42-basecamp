void	ft_ultimate_div_mod(int *a, int *b)
{
	int	memory;

	memory = *a;
	*a = *a / *b;
	*b = memory % *b;
}
