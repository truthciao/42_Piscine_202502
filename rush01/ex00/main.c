/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 10:46:21 by yshi              #+#    #+#             */
/*   Updated: 2025/03/02 10:49:21 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

#define SIZE 4

int		initialize_views(int *views, char *str);
void	initialize_map(int map[SIZE][SIZE]);
void	print_map(int map[SIZE][SIZE]);
int		check_views(int map[SIZE][SIZE], int views[SIZE*4]);
int		check_top(int map[SIZE][SIZE], int views[SIZE*4], int start, int end);
int		check_bottom(int map[SIZE][SIZE], int views[SIZE*4],
			int start, int end);
int		check_left(int map[SIZE][SIZE], int views[SIZE*4], int start, int end);
int		check_right(int map[SIZE][SIZE], int views[SIZE*4], int start, int end);

int	check_views(int map[SIZE][SIZE], int views[SIZE*4])
{
	if (!check_top(map, views, 0, SIZE))
		return (0);
	if (!check_bottom(map, views, SIZE, SIZE * 2))
		return (0);
	if (!check_left(map, views, SIZE * 2, SIZE * 3))
		return (0);
	if (!check_right(map, views, SIZE * 3, SIZE * 4))
		return (0);
	return (1);
}

int	check_unique(int map[SIZE][SIZE], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (map[row][i] == num || map[i][col] == num)
			return (0);
		i ++;
	}
	return (1);
}

int	put_box(int map[SIZE][SIZE], int views[SIZE*4], int row, int col)
{
	int	num;

	num = 1;
	if (row == SIZE)
		return (check_views(map, views));
	if (col == SIZE)
		return (put_box(map, views, row + 1, 0));
	while (num <= SIZE)
	{
		if (check_unique(map, row, col, num))
		{
			map[row][col] = num;
			if (put_box(map, views, row, col + 1))
			{
				return (1);
			}
			map[row][col] = 0;
		}
		num ++;
	}
	return (0);
}

void	print_map(int map[SIZE][SIZE])
{
	int		i;
	int		j;
	char	ch;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{	
			ch = map[i][j] + '0';
			write(1, &ch, 1);
			if (j != SIZE - 1)
				write(1, " ", 1);
			j ++;
		}
		write(1, "\n", 1);
		i ++;
	}
}

int	main(int argc, char **argv)
{	
	int	views[SIZE * 4];
	int	map[SIZE][SIZE];

	if (argc != 2)
	{
		write(1, "Error\n", 5);
		return (1);
	}
	initialize_map(map);
	put_box(map, views, 0, 0);
	if (initialize_views(views, argv[1]) != SIZE * SIZE
		|| !put_box(map, views, 0, 0))
	{
		write(1, "Error\n", 5);
		return (1);
	}
	print_map(map);
}
