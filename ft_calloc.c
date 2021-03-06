/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeong <tjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:37:04 by tjeong            #+#    #+#             */
/*   Updated: 2021/05/04 16:57:52 by tjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*new_ptr;
	size_t	i;

	if (!(new_ptr = (char *)malloc(size * count)))
		return (NULL);
	i = 0;
	while (i < size * count)
	{
		new_ptr[i] = '\0';
		i++;
	}
	return ((void *)new_ptr);
}
