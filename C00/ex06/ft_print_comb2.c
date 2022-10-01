/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:29:33 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/01 16:29:36 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	split(int value)
{
	int	ascii;
	int	digit;

	ascii = 48;
	if (value == 0)
	{
		write(1, "0", 1);
		return (0);
	}
	digit = (value % 10) + ascii;
	value = (value / 10) + ascii;
	if (value <= 9)
	{
		write(1, &digit, 1);
		return (0);
	}
	write(1, &value, 1);
	write(1, &digit, 1);
	return (0);
}

void	tmp(int i, int j)
{
	split(i);
	if (i == 0)
	{
		write(1, "0", 1);
	}
	write(1, " ", 1);
	split(j);
	if (j == 0)
	{
		write(1, "0", 1);
	}
	if (i == 98 && j == 99)
	{
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 100)
	{
		j = 1;
		while (j < 100)
		{
			if (i >= j)
			{
			}
			else
			{
				tmp(i, j);
			}
			j++;
		}
		i++;
	}
}

/*
int	main()
{

    ft_print_comb2();
    return (0);
}
*/