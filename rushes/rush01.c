void    ft_putchar(char c);

char	get_char(int row, int col, int x, int y) 
{
        if (row == 0 && col == 0) 	// prints the top left corner
                return ('/');
        if (row == 0 && col == x - 1)	// prints the top right corner x - 1 last adress of the array 
                return ('\\');	
        if (row == y - 1 && col == 0)	// print bottom left corner 
                return ('\\');
        if (row == y - 1 && col == x - 1) 	// prints bottom right corner 
                return ('/');
        if (row == 0 || row == y - 1 || col == 0 || col == x - 1)	// prints edges 
                return ('*');
        return (' ');		// this prints the insides of the rectangle
}		
 

void	rush(int x, int y)
{
	int	row;
	int	col; 

	if(x <= 0 || y <= 0)
		return; 
		
	row = 0;

        while (row < y)
        {
                col = 0;
                while (col < x)
                {
                        ft_putchar(get_char(row, col, x, y));
                        col++;
                }
                ft_putchar('\n');
                row++;
        }
} 

