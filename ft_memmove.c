/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeong <tjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:09:40 by tjeong            #+#    #+#             */
/*   Updated: 2021/05/06 17:39:17 by tjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	tmp_ptr[len];
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;

	if (dst == src || len == 0)
		return (dst);
	dst_ptr = (unsigned char *)dst;
	src_ptr = (unsigned char *)src;
	ft_memcpy(tmp_ptr, src_ptr, len);
	ft_memcpy(dst_ptr, tmp_ptr, len);
	return (dst);
}
