/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 16:15:33 by yshi              #+#    #+#             */
/*   Updated: 2025/02/23 09:53:33 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char letter);

void	ft_print_row(int len, char start, char end, char mid)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (i == 0)
			ft_putchar(start);
		else if (i == len - 1)
			ft_putchar(end);
		else
			ft_putchar(mid);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	j;

	if (x > 2147483646 || y > 2147483647 || x < 0 || y < 0)
		return ;
	j = 0;
	while (j < y)
	{
		if (j == 0)
			ft_print_row(x, 'A', 'A', 'B');
		else if (j == y - 1)
			ft_print_row(x, 'C', 'C', 'B');
		else
			ft_print_row(x, 'B', 'B', ' ');
		j ++;
	}
}
