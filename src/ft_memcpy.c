/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeong <tjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 18:41:57 by tjeong            #+#    #+#             */
/*   Updated: 2021/05/03 19:39:54 by tjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	char	*dst_ptr;
	char	*src_ptr;

	dst_ptr = (char *)dst;
	src_ptr = (char *)src;
	i = 0;
	while (n--)
	{
		dst_ptr[i] = src_ptr[i];
		i++;
	}
	return (dst);
}
