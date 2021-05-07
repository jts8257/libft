/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeong <tjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 19:32:26 by tjeong            #+#    #+#             */
/*   Updated: 2021/05/06 18:24:37 by tjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	tmp;
	char	*concat;

	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	if (!(concat = (char *)malloc((s1_len + s2_len) * sizeof(char) + 1)))
		return (0);
	bzero(concat, (s1_len + s2_len + 1));
	tmp = ft_strlcpy(concat, (char *)s1, s1_len + 1);
	tmp = ft_strlcpy(&concat[s1_len], (char *)s2, s2_len + 1);
	return (concat);
}
