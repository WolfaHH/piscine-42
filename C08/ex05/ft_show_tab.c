/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 06:30:45 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/20 06:30:46 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
//#include "../ex04/ft_strs_to_tab.c"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	split(int n)
{
	int	i;
	int	tmp;

	if (n > 0)
	{
		i = n % 10;
		n = n / 10;
		split(n);
		tmp = 48 + i;
		write(1, &tmp, 1);
	}
}

int	ft_putnbr(int nb)
{
	int	ya;

	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			write(1, "2", 1);
			nb = -147483648;
		}
		nb = -nb;
	}
	if (nb == 0)
	{
		ya = 48;
		write(1, &ya, 1);
		return (0);
	}
	split(nb);
	return (0);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

/*
int main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
}
*/
