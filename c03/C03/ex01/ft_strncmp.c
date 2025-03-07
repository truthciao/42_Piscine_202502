/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:03:56 by yshi              #+#    #+#             */
/*   Updated: 2025/02/25 11:21:08 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n - 1 && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i ++;
	}
	return (s1[i] - s2[i]);
}
//
//#include <stdio.h>
//#include <bsd/string.h>
//int	main(void)
//{
//	char	s1[] = "ABA";
//	char	s2[] = "ACEK";
//	unsigned	n = 1;
//	printf("My output:\t%d\n", ft_strncmp(s1, s2, n));
//	printf("Strncmp output:\t%d\n", strncmp(s1, s2, n));
//}
