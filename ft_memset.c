/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeong <tjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 17:03:00 by tjeong            #+#    #+#             */
/*   Updated: 2021/05/10 10:27:51 by tjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*tmp_ptr;

	tmp_ptr = (unsigned char *)b;
	i = 0;
	while (len--)
		tmp_ptr[i++] = (unsigned char)c;
	return (b);
}
