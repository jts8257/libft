/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeong <tjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 18:23:17 by tjeong            #+#    #+#             */
/*   Updated: 2021/05/04 13:02:56 by tjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*tmp_ptr;
	size_t	i;

	tmp_ptr = (char *)s;
	i = 0;
	while (n--)
	{
		tmp_ptr[i] = '\0';
		i++;
	}
}