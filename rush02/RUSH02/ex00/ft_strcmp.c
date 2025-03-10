/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suwildes <suwildes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:08:01 by suwildes          #+#    #+#             */
/*   Updated: 2025/03/09 16:48:49 by suwildes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "dictionary.h"
#include <unistd.h>
#include <stdlib.h>

void	thousands_and_more(int len, t_dict *dictionary, char *nb);
void	ft_putstr(char *str);
void	ft_write_two(char *str, char *nb, t_dict *dictionary, int j);
int		ft_len(char *str);
int		ft_atoi(char *str);
void	ft_hundred(t_dict *dictionary, int nb);

int	ft_lenght(char *s1, char *s2)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s1[i])
		i++;
	while (s2[n])
		n++;
	if (n >= i)
		return (n);
	else
		return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (i < ft_lenght(s1, s2))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	divi(int len)
{
	int	i;

	i = 1;
	while (len > 1)
	{
		i *= 10;
		len--;
	}
	return (i);
}

void	ft_write_numbers(t_dict *dictionary, char *nb, int i, int j)
{
	char	*str;
	int		len;
	int		n;

	len = ft_len(nb);
	n = len / 3;
	if (ft_strcmp(nb, "0") == 0)
		ft_putstr(dictionary[0].letters);
	else
	{
		str = malloc(sizeof (char) * len % 3 + 1);
		if (len % 3 != 0)
		{
			while (i < len % 3)
				str[i++] = nb[j++];
			ft_hundred(dictionary, ft_atoi(str));
			thousands_and_more(len, dictionary, nb);
		}
		ft_write_two(str, nb, dictionary, j);
		free(str);
	}
}

void	ft_write_two(char *str, char *nb, t_dict *dictionary, int j)
{
	int	len;
	int	i;

	len = ft_len(nb) - (ft_len(nb) % 3);
	i = 0;
	while (len > 0)
	{
		str = malloc(sizeof (char) * 4);
		while (i < 3)
			str[i++] = nb[j++];
		if (ft_strcmp(str, "000") != 0)
			ft_hundred(dictionary, ft_atoi(str));
		if (len > 3 && ft_strcmp(str, "000") != 0)
		{
			write(1, " ", 1);
			ft_putstr(dictionary[(len - 1) / 3 + 28].letters);
			if (ft_atoi(nb) % divi(len) != 0)
				write(1, " ", 1);
			if (ft_atoi(nb) % divi(len) >= 1 && ft_atoi(nb) % divi(len) <= 99)
				write(1, "and ", 4);
		}
		len = len - 3;
		i = 0;
		free(str);
	}
}
