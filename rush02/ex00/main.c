/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:25:10 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/17 17:25:12 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ftwhile1(int c[3], char **argv, t_matrice tab, char *res)
{
	f1(c, argv, tab, res);
	c[3] = 1;
	f2(c, argv, tab, res);
	c[3] = 2;
	f3(c, argv, tab, res);
	c[2] = 1000;
	c[3] = 3;
	f4(c, argv, tab, res);
	c[2] = 1000000;
	c[3] = 4;
	f2(c, argv, tab, res);
	c[3] = 5;
	f3(c, argv, tab, res);
	c[3] = 6;
	f4(c, argv, tab, res);
	c[2] = 1000000000;
	c[3] = 7;
	f2(c, argv, tab, res);
	c[3] = 8;
	f3(c, argv, tab, res);
	c[3] = 9;
	f4(c, argv, tab, res);
}

void	ftwhile(char **argv, t_matrice tab, char *res)
{
	int		c[4];
	int		i;
	int		len;

	len = ft_strlen(argv[1]);
	i = 0;
	while (len > 0)
	{
		c[0] = i;
		c[1] = len;
		ftwhile1(c, argv, tab, res);
		i++;
		len--;
	}
}

int	main(int argc, char **argv)
{
	t_matrice	tab;
	char		**split;
	char		*res;
	int			i;

	(void) argc;
	res = NULL;
	split = ft_split(ft_read_file(), "\n");
	ft_fill_tab(tab, split);
	i = 0;
	while (i < 41)
	{
		if (ft_atol(argv[1]) == ft_atol(tab[i][0]))
		{
			ft_putstr(tab[i][1]);
			return (0);
		}
		i++;
	}
	res = malloc(200000000);
	ftwhile(argv, tab, res);
	ft_putstr(res);
	return (0);
}
