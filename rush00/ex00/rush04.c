/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:10:50 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/04 17:16:04 by gpollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// i = compteur de ligne
// j = compteur de colonnes

void	ft_putchar(char c);

void	first_last_line(int x, char a)
{
	int	j;

	j = 0;
	if (x != 1)
	{
		while (j != x - 2)
		{
			ft_putchar('B');
			j++;
		}
		if (x - 2 == j)
		{
			ft_putchar(a);
		}
	}
	ft_putchar('\n');
}

void	mid_lines(int i, int x, int y)
{
	int	j;

	j = 0;
	if (x >= 1)
	{
		ft_putchar('B');
	}
	if (x != 1)
	{
		while (j != x - 2)
		{
			ft_putchar(' ');
			j++;
		}
		if (x >= 3)
		{
			ft_putchar('B');
		}	
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	while (i != y + 1 && x != 0)
	{
		if (i == 1)
		{
			ft_putchar('A');
			first_last_line(x, 'C');
		}
		if (y >= 3 && i != y - 1 && i != y)
		{
			mid_lines(i, x, y);
		}
		i++;
		if (i == y)
		{
			ft_putchar('C');
			{	
				first_last_line(x, 'A');
			}
		}
	}
}
