/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 12:23:02 by yshi              #+#    #+#             */
/*   Updated: 2025/02/23 09:52:43 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char letter);

void	ft_print_row(int len, char end, char mid)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (i == 0 || i == len - 1)
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

	if (x > 2147483647 || y > 2147483647 || x < 0 || y < 0)
		return ;
	j = 0;
	while (j < y)
	{
		if (j == 0 || j == y - 1)
			ft_print_row(x, 'o', '-');
		else
			ft_print_row(x, '|', ' ');
		j ++;
	}
}
