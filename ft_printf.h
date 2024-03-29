/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tverdood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:16:15 by tverdood          #+#    #+#             */
/*   Updated: 2022/01/20 15:20:17 by tverdood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *input, ...);
int		ft_putchar(int c);
int		ft_putstr_and_count(char *str);
int		hexa_len(unsigned long long int nb);
int		ft_input_type(char c);
int		ft_print_var(char type, va_list args);
int		ft_print_int(int nbr);
int		ft_print_char(char c);
int		ft_print_string(char *str);
int		ft_print_pourcent(void);
int		ft_print_hexa(unsigned int nb, char type);
int		ft_print_unsigned_int(unsigned int nb);
int		ft_print_pointer(unsigned long long int ptr);

#endif
