/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeong <tjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 20:00:41 by tjeong            #+#    #+#             */
/*   Updated: 2021/05/03 20:03:02 by tjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	src_len;
	char	*dst_ptr;
	char	*src_ptr;

	dst_ptr = (char *)dst;
	src_ptr = (char *)src;
	i = 0;
	while (src_ptr[src_len])
		src_len++;
	if (src > dst)
		while (len--)
		{
			dst_ptr[i] = src_ptr[i];
			i++;
		}
	else
		while (len--)
		{
			dst_ptr[i] = src_ptr[src_len];
			src_len--;
			i++;
		}
	return (dst_ptr);
}
