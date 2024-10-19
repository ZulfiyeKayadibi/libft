/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkayadib <zkayadib@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:00:59 by zkayadib          #+#    #+#             */
/*   Updated: 2024/10/19 13:39:36 by zkayadib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

//int main ()
//{
//	printf("%d", ft_isascii(0));
//	printf("%d", isascii(0));
//	printf("%d", ft_isascii(127));
//	printf("%d", isascii(127));
	
//}