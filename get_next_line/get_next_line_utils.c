/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 12:41:55 by aprosper          #+#    #+#             */
/*   Updated: 2022/02/26 14:17:00 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// char	*ft_strjoin(char const *str1, char const *str2)
// {
// 	char	*str3;
// 	int		i;
// 	int		j;
// 	size_t	len;	

// 	if (str1 == NULL || str2 == NULL)
// 		return (NULL);
// 	len = ft_strlen(str1) + ft_strlen(str2) + 1;
// 	str3 = (char *)malloc(sizeof(char) * len);
// 	if (!str3)
// 		return (NULL);
// 	i = 0;
// 	while (str1[i] != '\0')
// 	{
// 		str3[i] = str1[i];
// 		i++;
// 	}
// 	j = 0;
// 	while (str2[j] != '\0')
// 		str3[i++] = str2[j++];
// 	str3[i] = '\0';
// 	return (str3);
// }

char	*ft_strjoin(char *s, char c)
{
	char	*str;
	int		i;

	i = 0;
	while (s[i])
		i++;
	str = (char *) malloc(i + 2);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = c;
	str[i + 1] = '\0';
	free(s);
	return (str);
}

char	*ft_strdup(const char *str)
{
	int		i;
	char	*dst;

	dst = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
