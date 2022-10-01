/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcullen <fcullen@student.42lausann>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 23:14:42 by fcullen           #+#    #+#             */
/*   Updated: 2022/09/18 23:14:46 by fcullen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	f1(int c[3], char **argv, t_matrice tab, char *res)
{
	if (c[0] == 0)
	{
		if (argv[1][c[1] - 1] != '0' && argv[1][c[1] - 2] != '1')
			ft_get_from_dict(argv[1][c[1] - 1], tab, res, 1);
		if (argv[1][c[1] - 2] == '1')
			ft_get_from_dict_dizaine('1', tab, res);
	}
}

void	f2(int c[3], char **argv, t_matrice tab, char *res)
{
	if (c[0] == c[3] && argv[1][c[1] - 1] != '0' && argv[1][c[1] - 1] != '1')
		ft_get_from_dict((argv[1][c[1] - 1]), tab, res, 10);
}

void	f3(int c[3], char **argv, t_matrice tab, char *res)
{
	if (c[0] == c[3])
	{
		if (argv[1][c[1] - 1] != '0')
		{
			ft_get_from_dict('1', tab, res, 100);
			ft_get_from_dict(argv[1][c[1] - 1], tab, res, 1);
		}
	}
}

void	f4(int c[3], char **argv, t_matrice tab, char *res)
{
	if (c[0] == c[3])
	{
		ft_get_from_dict('1', tab, res, 1 * c[2]);
		if (argv[1][c[1] - 1] != '0' && argv[1][c[1] - 2] != '1')
			ft_get_from_dict(argv[1][c[1] - 1], tab, res, 1);
		if (argv[1][c[1] - 2] == '1')
			ft_get_from_dict_dizaine('1', tab, res);
	}
}
