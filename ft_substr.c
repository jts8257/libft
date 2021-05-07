/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeong <tjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 19:01:57 by tjeong            #+#    #+#             */
/*   Updated: 2021/05/06 17:48:52 by tjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substr;

	if (*s == 0)
		return (0);
	if (!(substr = (char *)malloc(len * sizeof(char) + 1)))
		return (0);
	if (start >= ft_strlen((char *)s))
		return (ft_strdup(""));
	i = 0;
	j = 0;
	while (s[start + i] && i < len)
	{
		substr[j] = s[start + i];
		i++;
		j++;
	}
	substr[j] = '\0';
	return (substr);
}
