/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numcheck.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suwildes <suwildes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 12:39:45 by suwildes          #+#    #+#             */
/*   Updated: 2025/03/09 16:53:47 by suwildes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "dictionary.h"

void	ft_putstr(char *str);
int		divi(int len);

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str [i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (nb >= 214748364 && str[i] > 7)
			break ;
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}

int	numcount(int nb)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

int	ft_onlynum(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > '9' || str[i] < '0')
			return (1);
		i++;
	}
	return (0);
}

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	thousands_and_more(int len, t_dict *dictionary, char *nb)
{
	if (len > 3)
	{
		write(1, " ", 1);
		ft_putstr(dictionary[(len - 1) / 3 + 28].letters);
		if (ft_atoi(nb) % divi(len) != 0)
			write(1, " ", 1);
		if (ft_atoi(nb) % divi(len) >= 1 && ft_atoi(nb) % divi(len) <= 99)
			write(1, "and ", 4);
	}
}
