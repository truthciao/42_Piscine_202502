/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 10:41:35 by yshi              #+#    #+#             */
/*   Updated: 2025/03/10 15:09:27 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	str[1000000];

	if (argc == 1)
	{
		write(1, "File name missing.", 18);
		return (1);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.", 19);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	read(fd, str, 100000);
	printf("%s\n", str);
}
