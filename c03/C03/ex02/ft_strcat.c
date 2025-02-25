/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:22:50 by yshi              #+#    #+#             */
/*   Updated: 2025/02/25 13:30:51 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	char	*orignal;

	orignal = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
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
//	char	s3[] = "ABA";
//	char	s4[] = "ACEK";
//	printf("My output:\t%s\n", ft_strcat(s1, s2));
//	printf("Strcat output:\t%s\n", strcat(s3, s4));
//}
