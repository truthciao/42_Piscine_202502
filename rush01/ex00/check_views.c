/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_views.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:54:25 by yshi              #+#    #+#             */
/*   Updated: 2025/03/02 14:54:28 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define SIZE 4

int	check_top(int map[SIZE][SIZE], int views[SIZE*4], int start, int end)
{
	int	row;
	int	visable;
	int	max_height;

	while (start < end)
	{
		row = 0;
		visable = 0;
		max_height = 0;
		while (row < SIZE)
		{
			if (map[row][start] > max_height)
			{
				max_height = map[row][start];
				visable ++;
			}
			row ++;
		}
		if (views[start] != visable)
			return (0);
		start ++;
	}
	return (1);
}

int	check_bottom(int map[SIZE][SIZE], int views[SIZE*4], int start, int end)
{
	int	row;
	int	visable;
	int	max_height;

	while (start < end)
	{
		row = SIZE - 1;
		visable = 0;
		max_height = 0;
		while (row >= 0)
		{
			if (map[row][start % SIZE] > max_height)
			{
				max_height = map[row][start % SIZE];
				visable ++;
			}
			row --;
		}
		if (views[start] != visable)
			return (0);
		start ++;
	}
	return (1);
}

int	check_left(int map[SIZE][SIZE], int views[SIZE*4], int start, int end)
{
	int	col;
	int	visable;
	int	max_height;

	while (start < end)
	{
		col = 0;
		visable = 0;
		max_height = 0;
		while (col < SIZE)
		{	
			if (map[start % SIZE][col] > max_height)
			{
				max_height = map[start % SIZE][col];
				visable ++;
			}
			col ++;
		}
		if (views[start] != visable)
			return (0);
		start ++;
	}
	return (1);
}

int	check_right(int map[SIZE][SIZE], int views[SIZE*4], int start, int end)
{
	int	col;
	int	visable;
	int	max_height;

	while (start < end)
	{
		col = SIZE - 1;
		visable = 0;
		max_height = 0;
		while (col >= 0)
		{
			if (map[start % SIZE][col] > max_height)
			{
				max_height = map[start % SIZE][col];
				visable ++;
			}
			col --;
		}
		if (views[start] != visable)
			return (0);
		start ++;
	}
	return (1);
}
