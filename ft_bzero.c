/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkayadib <zkayadib@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:19:13 by zkayadib          #+#    #+#             */
/*   Updated: 2024/11/02 06:45:45 by zkayadib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "stdio.h"
//#include "string.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)(s);
	while (i < n)
	{
		str[i] = '\0';
		i ++;
	}
}

//int main ()
//{
//	char z[] = "zulfiye";
//	ft_bzero(z, 4);
//	char t[] = "zulfiye";
//	bzero(t, 4);
//	printf("%c\n", z[5]);
//	printf("%c\n", t[5]);
//}
