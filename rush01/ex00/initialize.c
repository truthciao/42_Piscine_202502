/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:54:00 by yshi              #+#    #+#             */
/*   Updated: 2025/03/02 14:54:05 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define SIZE 4

int	initialize_views(int *views, char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			views[i++] = *str - '0';
		str ++;
	}
	return (i);
}

int	initialize_map(int map[SIZE][SIZE])
{
	int	i;
	int	j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
			map[i][j++] = 0;
		i ++;
	}
	return (1);
}
