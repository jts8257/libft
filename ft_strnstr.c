/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeong <tjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:26:13 by tjeong            #+#    #+#             */
/*   Updated: 2021/05/04 13:56:07 by tjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t fix_i;

	if (*needle == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			fix_i = i;
			while (haystack[i] && i < len && haystack[i] == needle[j])
			{
				i++;
				j++;
			}
			if (needle[j] == '\0')
				return ((char *)(haystack + fix_i));
		}
		if (haystack[i] != '\0')
			i++;
	}
	return (0);
}
