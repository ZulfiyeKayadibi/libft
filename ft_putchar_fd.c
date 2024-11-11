/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkayadib <zkayadib@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:12:14 by zkayadib          #+#    #+#             */
/*   Updated: 2024/11/09 22:46:50 by zkayadib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <unistd.h>
#include "fcntl.h"*/

void	ft_putchar_fd( char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main()
{
	int fd = open("a.txt", O_RDWR | O_CREAT, 0644);
	ft_putchar_fd('c', fd);
}*/