/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkayadib <zkayadib@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:41:04 by zkayadib          #+#    #+#             */
/*   Updated: 2024/11/09 22:10:09 by zkayadib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*char deneme(unsigned int x, char y)
{
	(void)x;
	y = y + 1;
	return y;
}*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mllc;
	int		i;
	int		j;

	i = ft_strlen(s);
	j = 0;
	mllc = malloc(sizeof(char) * (i + 1));
	if (!mllc)
		return (NULL);
	while (j < i)
	{
		mllc[j] = f(j, s[j]);
		j ++;
	}
	mllc[i] = '\0';
	return (mllc);
}

/*
int main ()
{
	printf("%s\n", ft_strmapi("abcdefg", deneme));
}*/