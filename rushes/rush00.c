#include <unistd.h>

void	ft_putchar(char	c);


char	get_char(int row, int col, int x, int y) 	// this is the helper function to get the characters that will be printed in rush(); 
{
	if ((row == 0 && col == 0) 			// this is to print out the edges in all directions 
		|| (row == 0 && col == x - 1)
		|| (row == y - 1 && col == 0)
		|| (row == y - 1 && col == x - 1))
		return ('o');

	if (row == 0 || row == y - 1)		// this is to print out the top and bottom lines
		return('-');
	if (col == 0 || col == x - 1)		// this is to print out the sides of the rectangles
		return('|'); 
	
	return(' '); 	// Inside the body of the rectangle 
}  	



void	rush(int x, int y) 	// Takes 2 paremeters in int form that we will pass in main(); 
{
	int	row;
	int	col;

	if(x <= 0 || y <= 0)	// this helps us not have a infinite loops
		return; 
	row = 0; 	// we init a row and it represents the first line being printed 
	

	while(row < y)
	{
		col = 0;	// we init the col the first col being printed
			
			while(col < x)
			{
				ft_putchar(get_char(row, col, x, y)); 
				col++; 
			}
		ft_putchar('\n');
		row ++; 
	} 		
	
} 



