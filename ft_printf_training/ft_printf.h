/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <aautin@student.42.fr >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:24:39 by aautin            #+#    #+#             */
/*   Updated: 2024/03/04 19:39:45 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

// hexa.c
int		ft_puthexa(int nbr, char maj_flag);
int		ft_putadress(int nbr);

// decimal.c
int		ft_putint(int nbr);
int		ft_putuint(unsigned int nbr);

// char.c
int		ft_putchar(char letter);
int		ft_putstr(const char *str);

// main.c
int		ft_printf(const char *format, ...);

#endif