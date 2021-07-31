int ft_iterative_power(int nb, int power)
{
	int retpow;

	retpow = nb;
	if (power < 0)
		return 0;
	if (nb == 0 && power == 0)
		return 1;
	while (power > 1)
	{
		retpow *= nb;
		power--;
	}
	return (retpow);
}
