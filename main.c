#include "libft.h"

void	generate_map(int tetr_n, int rseed)
{
	int	idx;
	int	tetr_type;
	int	tetr_offset;

	idx = 0;
	my_seed_rand(rseed);
	while (idx < tetr_n)
	{
		tetr_type = my_next_rand();
		tetr_offset = my_next_rand();
		generate_tetrimino(tetr_type, tetr_offset);
		idx++;
	}
}

int	main(int ac, char **av)
{
	int	tetr_n;
	int	rseed;

	if (ac < 2 || ac > 3 || !(tetr_n = ft_atoi(av[1])))
	{
		ft_putstr("Usage: ");
		ft_putstr(av[0]);
		ft_putstr(" <number of tetriminos> [random seed]");
		return (-1);
	}
	rseed = 0;
	if (ac == 3)
		rseed = ft_atoi(av[2]);
	generate_map(tetr_n, rseed);
	return (0);
}
