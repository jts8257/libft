/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeong <tjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:02:02 by tjeong            #+#    #+#             */
/*   Updated: 2021/05/07 16:57:12 by tjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_size(char const *s, char c)
{
	int cnt;
	int flag;

	flag = 0;
	cnt = 0;
	while (*s)
	{
		if (*s == c && flag == 0)
		{
			cnt++;
			flag = 1;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (cnt);
}

void	ft_split_fill(char *s, char **res, char c, int size)
{
	int		i;
	int		j;
	int		start;
	int		end;

	i = -1;
	j = -1;
	while (s[++i])
	{
		start = i;
		end = i;
		while (s[i++] == c)
			end++;
		if (end > start)
		{
			if (!(res[++j] = (char *)malloc(end - start + 1)))
				res[j] = NULL;
			ft_strncpy(res[j], &s[start], end - start + 1);
		}
	}
	if (j < size - 1)
	{
		if (!(res[++j] = (char *)malloc(size - end + 1)))
			res[j] = NULL;
		ft_strncpy(res[j], &s[end], size - end + 1);
	}
}

char	**ft_split(char const *s, char c)
{
	int		size;
	char	**res;

	size = count_size(s, c);
	if (!(res = (char **)malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	ft_split_fill((char *)s, res, c, size);
	res[size] = 0;
	return (res);
}
