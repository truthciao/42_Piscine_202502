/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 21:17:16 by yshi              #+#    #+#             */
/*   Updated: 2025/02/22 22:03:51 by yshi             ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1)
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
//
//#include <stdio.h>
//int	main(void)
//{
//	char	des[50];
//	ft_strlcpy(des, "always be happy", 7);
//	printf("%s", des);
//}
