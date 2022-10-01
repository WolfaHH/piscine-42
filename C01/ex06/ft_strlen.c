/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:57:19 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/02 12:57:21 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		c++;
		i++;
	}
	return (c);
}

/*
int main(void)
{
	char chaine[] = "Hello!";
	ft_putstr(chaine);
	printf("%d", ft_putstr(chaine));
    return 0;
}
*/