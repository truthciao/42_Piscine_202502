/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:39:35 by yshi              #+#    #+#             */
/*   Updated: 2025/02/25 16:33:46 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str++)
		len ++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_dest;

	i = 0;
	j = 0;
	len_dest = ft_strlen(dest);
	if (ft_strlen(dest) >= size)
		return (ft_strlen(src) + size);
	while (dest[i] != '\0')
		i ++;
	while (src[j] != '\0' && i < size - 1)
	{	
		dest[i] = src[j];
		i ++;
		j ++;
	}
	dest[i] = '\0';
	return (ft_strlen(src) + len_dest);
}
//
//#include <stdio.h>
//#include <bsd/string.h>
//int	main(void)
//{
//	char	s1[] = "";
//	char	s2[] = "ACEK";
//	int		nb = 6;
//	char	s3[50];
//	char	s4[50];
//	
//	strcpy(s3, s1);
//	strcpy(s4, s2);
//
//	printf("My output:\t%s\t|%d\n", s1, (int)ft_strlcat(s1, s2, nb));
//	printf("Strlcat output:\t%s\t|%d\n",s3, (int)strlcat(s3, s4, nb));
//}
