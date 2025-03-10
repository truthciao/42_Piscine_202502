/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:40:00 by yshi              #+#    #+#             */
/*   Updated: 2025/03/06 16:47:48 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	is_spliter(char ch, char *charset)
{
	while (*charset)
	{
		if (ch == *charset++)
			return (1);
	}
	return (0);
}

int	count_sub(char *str, char *charset)
{
	int	count;
	int	str_flag;

	count = 0;
	str_flag = 0;
	while (*str)
	{
		if (!is_spliter(*str, charset))
		{
			if (str_flag == 0)
				count ++;
			str_flag = 1;
		}
		else
			str_flag = 0;
		str ++;
	}
	return (count);
}

char	*new_sub(char *str, char *charset)
{
	int		len;
	char	*sub;

	len = 0;
	while (str[len] && !is_spliter(str[len], charset))
		len ++;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	sub[len] = '\0';
	while (--len >= 0)
	{
		sub[len] = str[len];
	}
	return (sub);
}

void	process(char *str, char *charset, char **sub_strs)
{
	int		j;
	int		str_flag;

	j = 0;
	str_flag = 0;
	while (*str)
	{
		if (!is_spliter(*str, charset))
		{
			if (str_flag == 0)
				sub_strs[j] = new_sub(str, charset);
			str_flag = 1;
		}
		if (is_spliter(*str, charset) || *(str + 1) == '\0')
		{	
			if (str_flag == 1)
				j ++;
			str_flag = 0;
		}
		str ++;
	}
	sub_strs[j] = NULL;
}

char	**ft_split(char *str, char *charset)
{
	char	**sub_strs;

	sub_strs = (char **)malloc(sizeof(char *) * (count_sub(str, charset) + 1));
	if (sub_strs == NULL)
		return (NULL);
	process(str, charset, sub_strs);
	return (sub_strs);
}
//
//#include <stdio.h>
//int	main(void)
//{
//	char	**list;
//	char	*spliter = ",e";
//	char	*str = "we are family, happy everyday!";
//
//	list = ft_split(str, spliter);
//	while(*list)
//	{
//		printf("%s\n", *list);
//		list ++;
//	}
//}	
