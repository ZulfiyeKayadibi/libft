/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkayadib <zkayadib@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:14:47 by zkayadib          #+#    #+#             */
/*   Updated: 2024/11/11 18:46:48 by zkayadib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*c;

	if (start >= (ft_strlen(s)))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	c = malloc(sizeof(char) * len + 1);
	i = 0;
	while (i < start)
		i ++;
	if (c)
		ft_strlcpy(c, s + i, len + 1);
	return (c);
}

/*int main ()
{
	char *str = "01234";
    size_t size = 10;
	char *str1 = "01234";
    char *ret = ft_substr("", 1, 1);
    //char *ret1 = substr("", 1, 1);
	printf("%s", ret);
	//printf("%s", ret1);
	
}
*/

/*	if (len != start)
	{
		len =
	}*/