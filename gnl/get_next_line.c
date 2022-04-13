/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 12:41:23 by aprosper          #+#    #+#             */
/*   Updated: 2022/02/26 15:09:51 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	char	buffer;
	char	*str_line;
	int		i;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	i = 0;
	// str_line = ft_strdup("");
	str_line = (char *)malloc(1);
	str_line[0] = '\0';
	while (read(fd, &buffer, BUFFER_SIZE / BUFFER_SIZE) > 0)
	{
		str_line = ft_strjoin(str_line, buffer);
		if (buffer == '\n')
			break ;
	}
	i = ft_strlen(str_line);
	if (i == 0)
	{
		free(str_line);
		str_line = NULL;
	}
	return (str_line);
}

int	main(void)
{
	// char	*str;
	// int		fd;

	// str = NULL;
	// fd = open("42", O_RDONLY);
	// if (fd == -1)
	// {
	// 	printf("open() failed\n");
	// 	return (1);
	// }
	// str = get_next_line(fd);
	// while (str)
	// {
	// 	printf("%s", str);
	// 	str = get_next_line(fd);
	// }
	// if (close(fd) == 1)
	// {
	// 	printf("close() failed\n");
	// 	return (1);
	// }
	// return (0);
	while (1)
		printf("%s\n", get_next_line(0));
}
