/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 23:27:59 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/18 23:28:00 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_get_from_dict(char str, t_matrice tab, char *result, long nb)
{
	int		i;

	i = 0;
	while (i < 41)
	{
		if ((ft_atol(&str) * nb) == ft_atol(tab[i][0]))
		{
			ft_strcat(result, tab[i][1]);
			ft_strcat(result, " ");
		}
		i++;
	}
}

void	ft_get_from_dict_dizaine(char str, t_matrice tab, char *result)
{
	int		i;

	i = 0;
	while (i < 41)
	{
		if ((ft_atol(&str) + 10) == ft_atol(tab[i][0]))
		{
			ft_strcat(result, tab[i][1]);
			ft_strcat(result, " ");
		}
		i++;
	}
}

void	ft_fill_tab(t_matrice tab, char	**split)
{
	int	i;
	int	j;
	int	a;
	int	test;

	a = 0;
	i = 0;
	while (split[i])
	{
		j = 0;
		test = 0;
		while (split[i][j])
		{
			if (test == 0 && split[i][j] >= '0' && split[i][j] <= '9')
				ft_strncat(tab[a][0], &split[i][j], 1);
			if (test == 0 && !(split[i][j] >= '0' && split[i][j] <= '9'))
				test = 1;
			if (test == 1 && split[i][j] != 32 && split[i][j] != ':')
				ft_strncat(tab[a][1], &split[i][j], 1);
			j++;
		}
		a++;
		i++;
	}
}

char	*ft_read_file(void)
{
	char	*buffer;
	int		fopen;

	buffer = malloc(20000000);
	fopen = open("numbers.dict", O_RDONLY);
	read(fopen, buffer, 200000);
	if (fopen == -1)
		write(1, "Dict Error\n", 12);
	return (buffer);
}
