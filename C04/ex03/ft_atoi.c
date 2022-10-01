/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:00:45 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/06 17:00:47 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	signe(char *str, int *i, int sign)
{
	while (*str)
	{
		if (str[*i] == ' ')
		{
		}
		else if (str[*i] == '-')
			sign++;
		else if (str[*i] == '+')
			sign += 2;
		else
			break ;
		*i = *i + 1;
	}
	return (sign);
}

int	ft_atoi(char *str)
{
	int		i;
	long	res;
	int		sign;

	sign = 0;
	i = 0;
	res = 0;
	sign = signe(str, &i, sign);
	while (*str)
	{
		if (str[i] >= 48 && str[i] <= 57)
			res = res * 10 + (str[i] - 48);
		else
			break ;
		i++;
	}
	if ((sign % 2) == 1)
		res = -res;
	if (res > 2147483647 || res < -2147483648)
		return (0);
	return (res);
}

/*
int main(void)
{
	printf("%d", ft_atoi("2147483647"));
	return 0;
}
*/
