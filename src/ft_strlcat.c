/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeong <tjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 13:53:13 by tjeong            #+#    #+#             */
/*   Updated: 2021/05/03 14:39:42 by tjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t dst_len;
	size_t src_len;
	size_t i;

	while (dst[dst_len])
		dst_len++;
	while (src[stc_len])
		src_len++;
	if (dstsize < dst_len)
		return (dstsize + src_len);
	else
	{
		i = 0;
		while (src[i] && dst_len + i + 1 < dstsize)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[i + 1] = '\0';
		return (dst_len + src_len);
	}
}
