/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:34:34 by cmansey           #+#    #+#             */
/*   Updated: 2022/09/11 19:29:16 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef int	t_matrice[4][4];

typedef int	t_matrice2[8][2];

int	ft_atoi(char *str);
int	rush01(char **argv, t_matrice *tab);

void	ft_arg(int argc, char **argv, int tmp[2], t_matrice *tab)
{
	if (argc == 17)
	{
		tmp[0] = 1;
		while (tmp[0] != 17)
		{
			if (!(ft_atoi(argv[tmp[0]]) >= 1 && ft_atoi(argv[tmp[0]]) <= 4))
			{
				tmp[1] = 0;
				break ;
			}
			tmp[0]++;
		}
		if (tmp[1] == 1)
		{	
			if (rush01(argv, tab) == 1)
			{
			}
			else
				write(1, "1Error\n", 6);
		}
		else
			write(1, "2Error\n", 6);
	}
	else
		write(1, "3Error\n", 6);
}

int	main(int argc, char **argv)
{
	t_matrice	tab;
	int			tmp[2];

	tmp[1] = 1;
	ft_arg(argc, argv, tmp, &tab);
	return (0);
}
