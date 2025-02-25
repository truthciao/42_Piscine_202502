/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:55:16 by yshi              #+#    #+#             */
/*   Updated: 2025/02/22 22:06:48 by yshi             ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	flag;
	int	i;

	i = 0;
	flag = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (flag == 0)
				str[i] -= 32;
			flag = 1;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			flag = 1;
		else
			flag = 0;
		i ++;
	}
	return (str);
}
//
//#include <stdio.h>
//int	main(void)
//{
//	char str[] = "42mots quarante-deux; cinquante+et+un";
//	ft_strcapitalize(str);
//	printf("%s", str);
//}
