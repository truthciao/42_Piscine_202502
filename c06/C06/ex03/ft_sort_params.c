/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 11:37:16 by yshi              #+#    #+#             */
/*   Updated: 2025/02/28 12:41:55 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1 ++;
		s2 ++;
	}
	return (*s1 - *s2);
}

char	**ft_sortstr(int argc, char **argv)
{
	char	*temp;
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j ++;
		}
		i ++;
	}
	return (argv);
}

int	main(int argc, char **argv)
{
	char	**sorted_argv;
	int		i;
	int		j;

	sorted_argv = ft_sortstr(argc, argv);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (sorted_argv[i][j])
		{
			write(1, &sorted_argv[i][j], 1);
			j ++;
		}
		write(1, "\n", 1);
		i ++;
	}
}
