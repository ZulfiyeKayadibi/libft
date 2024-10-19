/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkayadib <zkayadib@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:40:26 by zkayadib          #+#    #+#             */
/*   Updated: 2024/10/19 14:07:06 by zkayadib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != c)
	{
		i ++;
	}
	return ((char *)(s + i));
}

//int main ()
//{
//	const char z[] = "zulfiye";

//	printf("%s\n", ft_strchr(z, 'i'));
//	printf("%s\n", strchr(z, 'i'));
//}