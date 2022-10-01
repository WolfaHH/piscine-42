/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:03:05 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/02 13:03:08 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}

/*
int main(void)
{
	int test[4];
	test[0] = '0';
	test[1] = '1';
	test[2] = '2';
	test[3] = '3';
	ft_rev_int_tab(&test[0], 4);
	int i = 0;
	while (test[i] != '\0')
	{
		printf("%d", test[1]);
		i++;
	}
	
    return 0;
}
*/