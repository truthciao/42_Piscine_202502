/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:24:07 by yshi              #+#    #+#             */
/*   Updated: 2025/02/25 15:38:27 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{	
	int	i;
	int	j;
	int	occr;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{	
			occr = i;
			j = 0;
			while (to_find[j])
			{	
				if (str[i + j] != to_find[j])
					break ;
				j ++;
			}
			if (to_find[j] == '\0')
				return (&str[occr]);
		}
		i ++;
	}
	return (0);
}
//
//#include <stdio.h>
//#include <bsd/string.h>
//int	main(void)
//{
//	char	s1[] = "helloABA=hel0loACEDK";
//	char	s2[] = "";
//	char	s3[50];
//	char	s4[50];
//
//	strcpy(s3, s1);
//	strcpy(s4, s2);
//	printf("My output:\t%s\n", ft_strstr(s1, s2));
//	printf("Strcat output:\t%s\n", strstr(s3, s4));
//}
