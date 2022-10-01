/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_missing2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 21:11:17 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/11 21:11:20 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef int	t_matrice[4][4];
typedef int	t_matrice2[8][2];

void	module_1(t_matrice *tab, int empty, int *tmp);
void	module_2(t_matrice *tab, int *tmp);
void	module_3(t_matrice *tab, int *tmp, int *t);

int	module_5(int *list)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a != 4)
	{
		if (list[a] > 0)
		{
			b++;
		}
		a++;
	}
	return (b);
}

void	module_6(int *list, int test[2], t_matrice *tab, int *tmp)
{
	if (test[0] == 1)
	{
		*tab[tmp[0]][tmp[1]] = list[0];
	}
	else
	{
		if (test[1] % 100 == 0 && test[1] != 0)
		{
			*tab[tmp[0]][tmp[1]] = list[0];
		}
	}
}

void	tampon(t_matrice *tab, int empty, int *tmp, int *t)
{
	module_1(tab, empty, tmp);
	module_2(tab, tmp);
	module_3(tab, tmp, t);
}
