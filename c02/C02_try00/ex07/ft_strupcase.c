/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:59:39 by yshi              #+#    #+#             */
/*   Updated: 2025/02/22 18:49:59 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i ++;
	}
	return (str);
}
//
//#include <stdio.h>
//int main(void)
//{
//	char result[] = "abcdefghijk";
//	ft_strupcase(result);
//	printf ("%s", result);
//}
