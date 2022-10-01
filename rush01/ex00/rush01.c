/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 18:05:30 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/11 18:05:32 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef int	t_matrice[4][4];
typedef int	t_matrice2[8][2];

int	find_missing_values(t_matrice *tab, int c, int stop);
int	ft_atoi(char *str);
int	ft_putnbr(int nb);

int	rush01(char **argv, t_matrice *tab)
{
	int			i;
	int			a;
	int			b;
	t_matrice2	arg;

	arg[0][0] = ft_atoi(argv[1]);
	arg[0][1] = ft_atoi(argv[5]);
	arg[1][0] = ft_atoi(argv[2]);
	arg[1][1] = ft_atoi(argv[6]);
	arg[2][0] = ft_atoi(argv[3]);
	arg[2][1] = ft_atoi(argv[7]);
	arg[3][0] = ft_atoi(argv[4]);
	arg[3][1] = ft_atoi(argv[8]);
	arg[4][0] = ft_atoi(argv[9]);
	arg[4][1] = ft_atoi(argv[13]);
	arg[5][0] = ft_atoi(argv[10]);
	arg[5][1] = ft_atoi(argv[14]);
	arg[6][0] = ft_atoi(argv[11]);
	arg[6][1] = ft_atoi(argv[15]);
	arg[7][0] = ft_atoi(argv[12]);
	arg[7][1] = ft_atoi(argv[16]);
	a = 0;
	while (a != 4)
	{
		b = 0;
		while (b != 4)
		{
			*tab[a][b] = 0;
			b++;
		}
		a++;
	}
	i = 0;
	while (i != 7)
	{
		if (arg[i][0] == 4 && arg[i][1] == 4)
			return (0);
		else if ((arg[i][0] == 3 && arg[i][1] == 4)
		|| (arg[i][0] == 4 && arg[i][1] == 3))
			return (0);
		else if (arg[i][0] == 3 && arg[i][1] == 3)
			return (0);
		else if ((arg[i][0] == 2 && arg[i][1] == 4)
		|| (arg[i][0] == 4 && arg[i][1] == 2))
			return (0);
		else if (arg[i][0] == 1 && arg[i][1] == 1)
			return (0);
		if (arg[i][0] == 4 && arg[i][1] == 1)
		{
			if (i <= 3)
			{
				*tab[0][i] = 1;
				*tab[1][i] = 2;
				*tab[2][i] = 3;
				*tab[3][i] = 4;
			}
			else
			{
				*tab[i - 4][0] = 1;
				*tab[i - 4][1] = 2;
				*tab[i - 4][2] = 3;
				*tab[i - 4][3] = 4;
			}
		}
		else if (arg[i][0] == 1 && arg[i][1] == 4)
		{
			if (i <= 3)
			{
				*tab[0][i] = 4;
				*tab[1][i] = 3;
				*tab[2][i] = 2;
				*tab[3][i] = 1;
			}
			else
			{
				*tab[i - 4][0] = 4;
				*tab[i - 4][1] = 3;
				*tab[i - 4][2] = 2;
				*tab[i - 4][3] = 1;
			}
		}
		else if (arg[i][0] == 1 && arg[i][1] == 2)
		{
			if (i <= 3)
			{
				*tab[0][i] = 4;
				*tab[3][i] = 3;
			}
			else
			{
				*tab[i - 4][0] = 4;
				*tab[i - 4][3] = 3;
			}
		}
		else if (arg[i][0] == 2 && arg[i][1] == 1)
		{
			if (i <= 3)
			{
				*tab[0][i] = 3;
				*tab[3][i] = 4;
			}
			else
			{
				*tab[i - 4][0] = 3;
				*tab[i - 4][3] = 4;
			}
		}
		else if (arg[i][0] == 3 && arg[i][1] == 1)
		{
			if (i <= 3)
				*tab[3][i] = 4;
			else
				*tab[i - 4][3] = 4;
		}
		else if (arg[i][0] == 1 && arg[i][1] == 3)
		{
			if (i <= 3)
				*tab[0][i] = 4;
			else
				*tab[i - 4][0] = 4;
		}
		else if (arg[i][0] == 3 && arg[i][1] == 2)
		{
			if (i <= 3)
				*tab[2][i] = 4;
			else
				*tab[i - 4][2] = 4;
		}
		else if (arg[i][0] == 2 && arg[i][1] == 3)
		{
			if (i <= 3)
				*tab[1][i] = 4;
			else
				*tab[i - 4][1] = 4;
		}
		i++;
	}
	find_missing_values(tab, 0, 0);
	a = 0;
	while (a != 4)
	{
		b = 0;
		while (b != 4)
		{
			if (*tab[a][b] < 0)
				write(1, "0 ", 2);
			else
				ft_putnbr(*tab[a][b]);
			b++;
		}
		printf("\n");
		a++;
	}
	return (1);
}
