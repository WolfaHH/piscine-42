/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:34:28 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/03 12:34:30 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab [i];
				tab[i] = tab [i + 1];
				tab [i + 1] = tmp;
			}
			i++;
		}
		size--;
	}
}

/*
int    main()
{
    int tab[4] = {0, 3, 1, 2};
    int size = 4;
    ft_sort_int_tab(tab, size);
    printf("%d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3]); 
    return (0);
}
*/