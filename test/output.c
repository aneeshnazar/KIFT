# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <sys/stat.h>
# include <math.h>
# include <time.h>

int	main(int ac, char **av)
{
	if (ac < 2)
		return 0;
	srand(time(0));
	if (rand() % 3 == 0)
		write(1, "Hello I'm A Bot", 15);
	else if (rand() % 3 == 1)
		write(1, "How Are You?", 12);
	else
		write(1, "Welcome To 42", 13);
	return (0);
}
