/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:16:52 by yshi              #+#    #+#             */
/*   Updated: 2025/02/20 18:55:04 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int		len;
	char	*s;

	s = str;
	len = 0;
	while (*s ++)
		len ++;
	write(1, str, len);
}
//
//int	main(void)
//{
//	ft_putstr("tomato");
//}
