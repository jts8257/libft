/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeong <tjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 10:13:03 by tjeong            #+#    #+#             */
/*   Updated: 2021/05/07 12:53:56 by tjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_digit(int n)
{
	int digit;

	digit = 1;
	while (n /= 10)
		digit++;
	return (digit);
}

void	ft_itoa_insert(int n, char *converted, int size)
{
	int limit;

	limit = 0;
	converted[size] = '\0';
	if (n < 0)
	{
		n *= -1;
		converted[0] = '-';
		limit = 1;
	}
	while (size-- > limit)
	{
		converted[size] = ((n % 10) + '0');
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*converted;
	char	*int_min;
	int		size;

	size = n < 0 ? ft_digit(n) + 1 : ft_digit(n);
	converted = (char *)malloc(size * sizeof(char) + 1);
	if (!converted)
		return (NULL);
	if (n == -2147483648)
	{
		int_min = (char *)malloc(12 * sizeof(char));
		int_min = "-2147483648";
		ft_memmove(converted, int_min, 12);
	}
	else
		ft_itoa_insert(n, converted, size);
	return (converted);
}
