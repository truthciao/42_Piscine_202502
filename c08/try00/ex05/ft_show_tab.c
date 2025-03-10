/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 10:42:06 by yshi              #+#    #+#             */
/*   Updated: 2025/03/07 11:29:16 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

void	print_str(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str ++;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	char	size_char;

	while (par->str != NULL)
	{
		size_char = par->size + '0';
		write(1, &size_char, 1);
		write(1, "\n", 1);
		print_str(par->str);
		print_str(par->copy);
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
//	char *strs[3] = {"abdc", "edf", "uksey"};
//	t_stock_str	*list;
//	list = ft_strs_to_tab(3, strs);
//
//	ft_show_tab(list);
//	write(1, "===\n", 4);
//	printf("==========modify copy=======");
//	list[2].copy = "hello";
//	ft_show_tab(list);
//}
