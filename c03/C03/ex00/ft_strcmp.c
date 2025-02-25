/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 14:50:04 by yshi              #+#    #+#             */
/*   Updated: 2025/02/23 15:28:30 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len ++;
	return (len);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	len1;
	int	len2;
	int	len_max;
	int	i;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (len1 > len2)
		len_max = len1;
	else
		len_max = len2;
	while (i < len_max)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i ++;
	}
	return (s1[i] - s2[i]);
}
//
//#include <stdio.h>
//int	main(void)
//{
//	char s1[] = "abc";
//	char s2[] = "ab";
//	printf("%d", ft_strcmp(s1, s2));
//}
