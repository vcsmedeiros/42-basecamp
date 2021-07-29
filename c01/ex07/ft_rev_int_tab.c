void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	memory;

	i = 0;
	while (i < size)
	{
		size--;
		memory = tab[i];
		tab[i] = tab[size];
		tab[size] = memory;
		i++;
	}
}
