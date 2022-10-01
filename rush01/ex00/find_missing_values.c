/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_missing_values.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 18:03:21 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/11 18:03:23 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef int	t_matrice[4][4];
typedef int	t_matrice2[8][2];

void	tampon(t_matrice *tab, int empty, int *tmp, int *t);
int		module_5(int *list);
void	module_6(int *list, int test[2], t_matrice *tab, int *tmp);

void	module_1(t_matrice *tab, int empty, int *tmp)
{
	int	b;
	int	a;

	a = 0;
	while (a != 4)
	{
		b = 0;
		while (b != 4)
		{
			if (*tab[a][b] <= 0 && *tab[a][b] == empty)
			{
				tmp[0] = a;
				tmp[1] = b;
				a = 3;
				break ;
			}
			b++;
		}
		a++;
	}
}

void	module_2(t_matrice *tab, int *tmp)
{
	int	a;
	int	b;

	a = 0;
	while (a != 4)
	{
		b = 0;
		while (b != 4)
		{
			if (*tab[a][b] <= 0)
			{
				if (!(a == tmp[0] && b == tmp[1]))
				{
					*tab[a][b] -= 1;
				}
				else
				{
				}
			}
			b++;
		}
		a++;
	}
}

void	module_3(t_matrice *tab, int *tmp, int *t)
{
	int	b;
	int	a;

	if (tmp[0] == -2555)
	{
		*t = 0;
		a = 0;
		while (a != 4)
		{
			b = 0;
			while (b != 4)
			{
				if (*tab[a][b] <= 0)
				{
					*t = 1;
					*tab[a][b] = 0;
				}
				b++;
			}
			a++;
		}
	}
}

void	module_4(t_matrice *tab, int tmp[2], int *list)
{
	int	a;
	int	b;
	int	i;
	int	t;

	a = 0;
	i = 0;
	while (a != 4)
	{
		t = 0;
		b = 0;
		while (b != 4)
		{
			if ((a + 1) == *tab[tmp[0]][b] || (a + 1) == *tab[b][tmp[1]])
				t = 1;
			b++;
		}
		if (!(t == 1))
		{
			list[i] = (a + 1);
			i++;
		}
		a++;
	}
}

int	find_missing_values(t_matrice *tab, int c, int stop)
{
	int	tmp[2];
	int	list[4];
	int	empty;
	int	t;
	int	test[2];

	if (stop == 5000)
		return (0);
	t = 0;
	list[0] = 0;
	list[1] = 0;
	list[2] = 0;
	list[3] = 0;
	empty = -c;
	tmp[0] = -2555;
	tampon(tab, empty, tmp, &t);
	if (t == 1 && tmp[0] == -2555)
		return (find_missing_values(tab, 0, stop + 1));
	else if (tmp[0] == -2555)
		return (1);
	module_4(tab, tmp, list);
	test[0] = module_5(list);
	test[1] = stop;
	module_6(list, test, tab, tmp);
	return (find_missing_values(tab, c + 1, stop + 1));
}
