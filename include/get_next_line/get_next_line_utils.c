/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: choiejae <choiejae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:20:46 by choiejae          #+#    #+#             */
/*   Updated: 2023/05/20 15:23:52 by choiejae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	gnl_strlen(const char *s)
{
	int	cnt;

	cnt = 0;
	while (s[cnt])
		cnt++;
	return (cnt);
}

char	*gnl_strjoin(char *s1, char *s2)
{
	int		idx;
	int		size_s1;
	int		size_s2;
	char	*connected_s;

	size_s1 = gnl_strlen(s1);
	size_s2 = gnl_strlen(s2);
	connected_s = (char *)malloc(sizeof(char) * (size_s1 + size_s2) + 1);
	if (!connected_s)
		return (NULL);
	idx = 0;
	while (*s1)
		connected_s[idx++] = *s1++;
	while (*s2)
		connected_s[idx++] = *s2++;
	connected_s[idx] = '\0';
	return (connected_s);
}

char	*gnl_strndup(const char *src, int start, int num)
{
	char	*temp;
	int		idx_s;
	int		idx_t;

	idx_s = 0;
	idx_t = 0;
	temp = (char *)malloc(sizeof(char) * num + 1);
	if (!temp)
		return (NULL);
	while (src[idx_s] && idx_t < num)
		temp[idx_t++] = src[start + idx_s++];
	temp[idx_t] = '\0';
	return (temp);
}
