/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkayadib <zkayadib@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:21:22 by zkayadib          #+#    #+#             */
/*   Updated: 2024/10/19 13:39:58 by zkayadib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c < 127);
}
//int main ()
//{
//	printf("%d\n", ft_isprint(32));
//	printf("%d\n", isprint(32));
//	printf("%d\n", ft_isprint(127));
//	printf("%d\n", isprint(127));
//}