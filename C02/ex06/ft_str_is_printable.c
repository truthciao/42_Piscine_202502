/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:44:41 by yshi              #+#    #+#             */
/*   Updated: 2025/02/22 17:57:47 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	non_printable;
	int	i;

	non_printable = 0;
	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
			non_printable ++;
		i ++;
	}
	if (non_printable >= 1)
		return (0);
	else
		return (1);
}
//
//#include <stdio.h>
//int main(void)
//{
//	int result;
//	result = ft_str_is_printable("dyc");
//	printf ("%d", result);
//}
