/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 18:44:11 by yshi              #+#    #+#             */
/*   Updated: 2025/02/22 18:49:29 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i ++;
	}
	return (str);
}
//
//#include <stdio.h>
//int main(void)
//{
//	char result[] = "abcdefghijk";
//	ft_strlowcase(result);
//	printf ("%s", result);
//}
