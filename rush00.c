/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lqamo <luars.qamo@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 14:42:53 by lqamo             #+#    #+#             */
/*   Updated: 2026/02/08 14:48:41 by lqamo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	print_char(int row, int col, int x, int y)
{
	if ((row == 0 && col == 0)
		|| (row == 0 && col == x - 1)
		|| (row == y - 1 && col == 0)
		|| (row == y - 1 && col == x - 1))
		ft_putchar('o');
	else if (row == 0 || row == y - 1)
		ft_putchar('-');
	else if (col == 0 || col == x - 1)
		ft_putchar('|');
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
