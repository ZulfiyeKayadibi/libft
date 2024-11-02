/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkayadib <zkayadib@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:48:47 by zkayadib          #+#    #+#             */
/*   Updated: 2024/11/02 07:13:51 by zkayadib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	l;

	l = ft_strlen(s) - 1;
	if ((char)c == '\0')
	{
		l ++;
		return ((char *) &s[l]);
	}
	while (l >= 0 && s[l])
	{
		if (s[l] == (char)c)
			return ((char *)(s + l));
		l --;
	}
	return (NULL);
}
//int main ()
//{
//	char z[] = "zulfiye Kayadibi.";
//	printf("%s\n", ft_strrchr(z, 'i'));
//	//printf("%s\n", strrchr(z, 'i'));
//}
//#include <stdio.h>

//int	main()
//{
//	char *str = "selam";
//	printf("%p\n", str);
//	printf("%p\n", &str[0]);
//	printf("%s\n", (str + 1)[0]);
//}