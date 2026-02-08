/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lqamo <luars.qamo@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 14:51:37 by lqamo             #+#    #+#             */
/*   Updated: 2026/02/08 14:52:24 by lqamo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

char	print_char(int row, int col, int x, int y)
{
	if (row == 0 && col == 0)
		return ('A');
	if (row == 0 && col == x - 1)
		return ('C');
	if (row == y - 1 && col == 0)
		return ('A');
	if (row == y - 1 && col == x - 1)
		return ('C');
	if (row == 0 || row == y - 1 || col == 0 || col == x - 1)
		return ('B');
	return (' ');
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
			ft_putchar(print_char(row, col, x, y));
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
