/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelattar <aelattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 15:13:11 by aelattar          #+#    #+#             */
/*   Updated: 2026/11/21 16:13:43 by aelattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
ssize_t	ft_putchar(char c, int fd);
ssize_t	ft_putstr(const char *str, int fd);
ssize_t	puthex(uintptr_t nb, const char format);
ssize_t	putptr(void *ptr, const char format);
char	*ft_strchr(const char *s, int c);

#endif