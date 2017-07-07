/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 09:23:20 by nmtimkul          #+#    #+#             */
/*   Updated: 2017/07/02 09:23:25 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# define LL_INT long long int
# define ULL_INT unsigned long long int

typedef	struct		s_flags
{
	int		has_flags;
	int		plus;
	int		minus;
	int		zero;
	int		hash;
	int		space;
	int		prec;
	int		ip;
	int		padding;
	char	pad;
}					t_flags;

typedef struct		s_mods
{
	int	has_mod;
	int	ln;
	int	sht;
	int	u_sign;
	int	zee;
	int	jay;
}					t_mods;

int					ft_printf(const char *format, ...);
int					is_pflag(char c);
int					is_pmodifier(char c);
int					is_psigned(char c);
int					is_pnumeric(char c);
int					ft_out(char type, char *out, t_flags fl);
void				ft_putstr_w(char *str, int *w, int inc);
char				*convert(long long num, int base, int hex_upper);
char				*convert_uns(ULL_INT num, int base, int hex_upper);
char				*ft_check(const char *str, t_mods md, va_list *args);
char				*ft_check_mod(const char *str, t_mods md, va_list *args);
char				*convert_uns_l(LL_INT num, int base, int hex_upper);
t_flags				init_flags(void);
t_mods				init_mods(void);

#endif
