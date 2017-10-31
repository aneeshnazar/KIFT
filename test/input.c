# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <sys/stat.h>
# include <math.h>

int	main(int ac, char **av)
{
	int i;
	int x;
	i = -1;
	x = 1;
	while (x < ac)
	{
		while (av[x][++i] != '\0')
			write(1, &av[x][i], 1);
		x++;
		write(1, " ", 1);
		i = -1;
	}
	return (0);
}