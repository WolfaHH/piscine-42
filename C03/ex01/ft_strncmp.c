/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:55:00 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/04 17:55:17 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

/*
int main()
{
    char *s1 = "1cou1";
    char *s2 = "1couhkkk";
 
    int t = ft_strncmp(s1, s2, 6);
    printf("%d", t);
	t = strncmp(s1, s2, 6);
	printf("%d", t);

    return 0;
}

	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && n > 0)
	{
		if (*s1 != *s2)
		{
			break ;
		}
		n--;
		i++;
		s1++;
		s2++;
	}
	if (n == 0)
	{
		return (0);
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
	*/
