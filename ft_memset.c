/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkayadib <zkayadib@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:32:22 by zkayadib          #+#    #+#             */
/*   Updated: 2024/11/02 07:04:46 by zkayadib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

void	*ft_memset(void *ptr, int x, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)(ptr))[i] = x;
		i++;
	}
	return (ptr);
}
/*/*int main ()
{
	int z[] = {1, 9, 0, 7};

	
	int i = 0;
	while (i < 4)
	{
		ft_memset(z + i, 2, 1); 
		printf("%d\n", z[i]);
		i++;
	}
	
}
*/
//int main ()
//{
	//int a[] = {1, 9, 0, 7};
	//int i;
	//int j
	//i = 0;
	//j = 1;
	////ft_memset(a , 255, 4);
	////ft_memset(a , 254, 2);
	////ft_memset(a, 12, 1);

	////ft_memset(a , 1, 2);
	////ft_memset(a, 244, 1);
	//ft_memset(a , 255, 4);
	//ft_memset(a , 253, 2);
	//ft_memset(a, 68, 1);

	////ft_memset(a , 2, 2);
	////ft_memset(a, 188, 1);
	//printf("%d\n", a[0]);
	////while (i < 4)
	////{
	////	ft_memset(a , -2, j);
	////	printf("%d\n", (char)a[i]);
	////	j += 4;
	////	i ++;
	////}
	//int a[] = {1};
	//ft_memset(a, 128, 4);
	//printf("%d\n", a[0]);
	//long a= 2147483647;
	//a = a + a;
	//a = a + 4;
	//printf("%lu\n", a);
//	long a = 2147483647;
//	a = a + 2147476449;
//	printf("%lu\n", a);
//}*/