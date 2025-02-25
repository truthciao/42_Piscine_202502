/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 13:53:24 by yshi              #+#    #+#             */
/*   Updated: 2025/02/23 18:01:23 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i ++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i ++;
	}
	return (dest);
}
//
//#include <stdio.h>
//int	main(void)
//{
//	char	des[50];
//	ft_strncpy(des, "babo", 20);
//	for (int i = 0; i < 50; i++)
//		printf("%c", des[i]);
//	//printf("%s", des);
//}
