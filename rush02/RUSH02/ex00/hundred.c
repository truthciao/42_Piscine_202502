/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundred.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suwildes <suwildes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 10:28:54 by suwildes          #+#    #+#             */
/*   Updated: 2025/03/09 17:39:26 by suwildes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "dictionary.h"
#include <unistd.h>
#include <stdlib.h>

int		ft_len(char *str);
int		ft_atoi(char *str);
void	ft_hundrtwo(t_dict *dictionary, int nb);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_hundred(t_dict *dictionary, int nb)
{
	int	test;

	test = 0;
	if (nb == 0)
		ft_putstr(dictionary[nb].letters);
	else
	{
		if (nb >= 100)
		{
			ft_putstr(dictionary[nb / 100].letters);
			write(1, " ", 1);
			ft_putstr(dictionary[28].letters);
			if (nb % 100 != 0)
				write(1, " and ", 5);
		}
		nb = nb % 100;
		if (nb < 20 && nb > 0)
			ft_putstr(dictionary[nb].letters);
		else
			ft_hundrtwo(dictionary, nb);
	}
}

void	ft_hundrtwo(t_dict *dictionary, int nb)
{
	if (nb >= 20)
	{
		ft_putstr(dictionary[(nb - 20) / 10 + 20].letters);
		if (nb % 10 != 0)
			write(1, " ", 1);
	}
	nb = nb % 10;
	if (nb > 0)
		ft_putstr(dictionary[nb].letters);
}

char	*ft_str(char *str)
{
	char	*string;
	int	i;
	int	sign;
	int	j;

	j = 0;
	sign = 1;
	i = 0;
	string = malloc(sizeof (char) * 40);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
                i++;
        while (str[i] == '-' || str [i] == '+')
        {
                if (str[i] == '-')
                        sign = -sign;
                i++;
        }
	if (sign == -1)
		string[j++] = '-';
	while (str[i] >= '0' && str[i] <= '9')
	{
		string[j] = str[i];
		i++;
		j++;
	}
	string[j] = 0;
	return (string);
}
