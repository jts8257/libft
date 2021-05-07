/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeong <tjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:01:41 by tjeong            #+#    #+#             */
/*   Updated: 2021/05/07 20:50:44 by tjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		judge_return(long res)
{
	if (res > 2147483647)
		return (-1);
	if (res < -2147483648)
		return (0);
	return (1);
}

int		ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	long	res;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (!ft_isdigit(str[i]))
		return (0);
	res = 0;
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + (sign * (str[i] - '0'));
		i++;
	}
	if (judge_return(res) <= 0)
		res = judge_return(res);
	return (res);
}
