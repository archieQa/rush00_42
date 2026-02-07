
void	ft_putchar(char c);

char    get_char(int row, int col, int x, int y)
{
        if (row == 0 && col == 0)	// these 2 makes top corners as "A" 
                return ('A');
        if (row == 0 && col == x - 1)
                return ('A');

        if (row == y - 1 && col == 0)		// these 2 makes bottom corners as "C"
                return ('C');
        if (row == y - 1 && col == x - 1)
                return ('C');

        if (row == 0 || row == y - 1 || col == 0 || col == x - 1)	// this makes edges as "B"
                return ('B');

        return (' ');			// this prints empty in the body of the ractangle
}

void    rush(int x, int y)
{
        int     row;
        int     col; 

        if(x <= 0 || y <= 0) 	// we make sure to stop infinit loops
       		return; 
	 
        row = 0;		// declare row as 0 
	
        while (row < y) 	// while row = 0 < y loop when row is smaller than y. Vertical 
        {
                col = 0;	// declare col = 0 
                while (col < x)	 	// loop when col is smaller than x. Horziontal 
                {
                        ft_putchar(get_char(row, col, x, y));	// put all the chars in the right place using get_char 
                        col++;		// increment to go to next line
                }	
                ft_putchar('\n');	// go to next line
                row++;		// increment row 
        }
} 

