/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaferyad <aaferyad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:13:46 by aaferyad          #+#    #+#             */
/*   Updated: 2024/11/02 15:25:34 by aaferyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
 * ft_putchar_fd - write a char to a file discriptor
 * @c: the character.
 * @fd: file discriptor
 * */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
