/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 10:42:06 by yshi              #+#    #+#             */
/*   Updated: 2025/03/10 09:52:11 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str ++;
	}
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	char	nb_char;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb * -1);
	}	
	else if (nb <= 9)
	{	
		nb_char = nb + '0';
		write(1, &nb_char, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str != NULL)
	{
		ft_putstr(par->str);
		ft_putnbr(par->size);
		write(1, "\n", 1);
		ft_putstr(par->copy);
		par ++;
	}
}
//// for test
//int	ft_strlen(char *str)
//{
//	int	i;
//
//	i = 0;
//	while (str[i])
//		i ++;
//	return (i);
//}
//
//char	*ft_strcpy(char *dest, char *src)
//{
//	int	i;
//
//	i = 0;
//	while (src[i])
//	{
//		dest[i] = src[i];
//		i ++;
//	}
//	dest[i] = '\0';
//	return (dest);
//}
//struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
//{
//	t_stock_str	*s_av;
//	int			i;
//
//	i = 0;
//	s_av = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
//	if (s_av == NULL)
//		return (NULL);
//	while (i < ac)
//	{
//		s_av[i].size = ft_strlen(av[i]);
//		s_av[i].str = av[i];
//		s_av[i].copy = (char *)malloc(sizeof(char) * (ft_strlen(av[i]) + 1));
//		ft_strcpy(s_av[i].copy, av[i]);
//		i ++;
//	}
//	s_av[i].str = NULL;
//	return (s_av);
//}
//#include <stdio.h>
//int	main(void)
//{
//	char *strs[3] = {"abdc", "ejkdjfldjfldjfldjfldkjflkdjlfjdldf", "uksey"};
//	t_stock_str	*list;
//	list = ft_strs_to_tab(3, strs);
//
//	ft_show_tab(list);
//	write(1, "==========modify copy=\n", 25);
//	list[2].copy = "hello";
//	ft_show_tab(list);
//}
