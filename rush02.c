/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lqamo <luars.qamo@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 14:50:40 by lqamo             #+#    #+#             */
/*   Updated: 2026/02/08 14:50:45 by lqamo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_char(int row, int col, int x, int y)
{
	if (row == 0 && col == 0)
		ft_putchar('A');
	else if (row == 0 && col == x - 1)
		ft_putchar('A');
	else if (row == y - 1 && col == 0)
		ft_putchar('C');
	else if (row == y - 1 && col == x - 1)
		ft_putchar('C');
	else if (row == 0 || row == y - 1 || col == 0 || col == x - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x <= 0 || y <= 0)
		return ;
	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			print_char(row, col, x, y);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
