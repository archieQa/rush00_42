#include <unistd.h>
void	rush(int x, int y);

int	main(void)
{
	rush(1, 1);
	write(1, "\n", 1);
	rush(2, 1);
	write(1, "\n", 1);
	rush(1, 2);
	write(1, "\n", 1);
	rush(2, 2);
	write(1, "\n", 1);
	rush(2, 3);
	write(1, "\n", 1);
	rush(3, 2);
	write(1, "\n", 1);
	rush(5, 3);
	write(1, "\n", 1);
	rush(5, 2);
	write(1, "\n", 1);
	rush(1, 5);
	write(1, "\n", 1);
	rush(5, 1);
	write(1, "\n", 1);
	rush(4, 4);
	rush(20, 50);
	write(1, "\n", 1);
	rush(50, 20);
	write(1, "\n", 1);
	rush(70, 2);
	write(1, "\n", 1);
	rush(2, 70);
	return 0;  
}  
