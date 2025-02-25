/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:34:21 by yshi              #+#    #+#             */
/*   Updated: 2025/02/25 14:23:00 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*orignal;
	unsigned int	i;

	orignal = dest;
	i = 0;
	while (*dest)
		dest++;
	while (src[i] != '\0' && i < nb)
		*dest ++ = src[i++];
	*dest = '\0';
	return (orignal);
}
//
//#include <stdio.h>
//#include <bsd/string.h>
//int	main(void)
//{
//	char	s1[] = "ABA";
//	char	s2[] = "ACEK";
//	int		nb = 0;
//	char	s3[50];
//	char	s4[50];
//	
//	strcpy(s3, s1);
//	strcpy(s4, s2);
//	printf("My output:\t%s\n", ft_strncat(s1, s2, nb));
//	printf("Strcat output:\t%s\n", strncat(s3, s4, nb));
//}
