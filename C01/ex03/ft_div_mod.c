/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:34:32 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/02 11:34:35 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	tmp;

	tmp = a / b;
	*div = tmp;
	tmp = a % b;
	*mod = tmp;
}

/*
int main(void)
{
	int a = 41;
    int b = 42;
	ft_div_mod(&a, &b);
	printf("%d %d", a, b);
    return 0;
}
*/