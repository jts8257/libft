/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeong <tjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 19:07:12 by tjeong            #+#    #+#             */
/*   Updated: 2021/05/03 19:40:33 by tjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n)
{
	char *src_ptr;

	src_ptr = (char *)src;
	while (n-- && *src_ptr)
	{
		if (*src_ptr[i] == c)
			return (++dst);
		src_ptr++;
		dst++;
	}
	return (0);
}
