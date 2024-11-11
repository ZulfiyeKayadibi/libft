/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkayadib <zkayadib@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 04:13:01 by zkayadib          #+#    #+#             */
/*   Updated: 2024/11/10 15:39:18 by zkayadib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_sizeof_int(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i ++;
	}
	while (n > 9)
	{
		n /= 10;
		i ++;
	}
	i += 2;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*mllc;
	size_t	size;

	size = ft_sizeof_int(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	mllc = malloc(sizeof(char) * size);
	if (!mllc)
		return (NULL);
	if (n < 0)
	{
		mllc[0] = '-';
		n *= -1;
	}
	mllc[size - 1] = '\0';
	while ((n > 9 && (size - 2) > 0) || ((mllc[0] == '-') && (size - 2) > 1))
	{
		mllc[size - 2] = (n % 10) + '0';
		n = n / 10;
		size --;
	}
	mllc[size - 2] = n + '0';
	return (mllc);
}

/*int main ()
{
	printf("%s", ft_itoa(-2147483));
}
*/