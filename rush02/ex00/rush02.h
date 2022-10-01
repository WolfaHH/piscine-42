/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 23:35:39 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/18 23:35:43 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/uio.h>
# include <sys/types.h>
# include <strings.h>

typedef char	t_matrice[43][2][4000];
char	**ft_split(char *str, char *charset);
char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);
void	ft_get_from_dict(char str, t_matrice tab, char *result, long nb);
void	ft_get_from_dict_dizaine(char str, t_matrice tab, char *result);
void	f4(int c[3], char **argv, t_matrice tab, char *res);
void	f3(int c[3], char **argv, t_matrice tab, char *res);
void	f2(int c[3], char **argv, t_matrice tab, char *res);
void	f1(int c[3], char **argv, t_matrice tab, char *res);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
void	ft_fill_tab(t_matrice tab, char	**split);
char	*ft_read_file(void);
long	ft_atol(char *str);
void	ft_putstr(char *str);
#endif
