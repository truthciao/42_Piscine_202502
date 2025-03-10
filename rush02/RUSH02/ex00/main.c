/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suwildes <suwildes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 11:31:18 by suwildes          #+#    #+#             */
/*   Updated: 2025/03/09 17:27:44 by suwildes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "dictionary.h"

char	*ft_str(char *str);
void	ft_write_numbers(t_dict *dictionary, char *nb, int i, int j);
char	**ft_split(char *str, char *charset);
void	ft_ruush(char **tab, int i, int j, char *nb);
void	ft_ruuush(char ***pointertab, char *nb);
int		ft_atoi(char *str);
int		numcount(int nb);
int		ft_onlynum(char *str);

void	ft_rush(int fd, char *nb)
{
	char	*str;
	int		i;
	char	**tab;

	i = 0;
	str = malloc(sizeof (char) * 1000000);
	read(fd, str, 1000000);
	tab = malloc(sizeof (char *) * 41);
	while (i < 41)
	{
		tab[i] = malloc(sizeof (char) * 100);
		i++;
	}
	tab = ft_split(str, "\n");
	free(str);
	ft_ruush(tab, 0, 0, nb);
	free(tab);
	write(1, "\n", 1);
}

void	ft_ruush(char **tab, int i, int j, char *nb)
{
	char	***pointertab;

	pointertab = malloc(sizeof (char **) * 41);
	while (i < 41)
		pointertab[i++] = malloc(sizeof (char *) * 2);
	i = 0;
	while (i < 41)
	{
		while (j < 2)
		{
			pointertab[i][j] = malloc(sizeof (char) * 50);
			j++;
		}
		j = 0;
		i++;
	}
	while (j < 41)
	{
		pointertab[j] = ft_split(tab[j], " :");
		j++;
	}
	ft_ruuush(pointertab, nb);
	free(pointertab);
}

void	ft_ruuush(char ***pointertab, char *nb)
{
	t_dict	*dictionary;
	int		i;

	i = 0;
	dictionary = (t_dict *)malloc(sizeof (t_dict) * 41);
	while (i < 41)
	{
		dictionary[i].num = (pointertab[i][0]);
		dictionary[i].letters = (pointertab[i][1]);
		i++;
	}
	ft_write_numbers(dictionary, nb, 0, 0);
}

int	main(int argc, char **argv)
{
	int	fd;

	if ((argc != 2 && argc != 3) || ft_onlynum(ft_str(argv[1])) == 1)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (argc == 2 && ft_atoi(argv[1]) >= 0)
		fd = open("numbers.dict.txt", O_RDONLY);
	else if (argc == 3 && atoi(argv[1]) > 0)
		fd = ft_atoi(argv[2]);
	if (argc == 2 || argc == 3)
	{
		if (atoi(argv[1]) == 0)
			ft_rush(fd, "0");
		else
			ft_rush(fd, ft_str(argv[1]));
	}
	return (0);
}
