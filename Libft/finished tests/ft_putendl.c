/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabbenbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:34:53 by fabbenbr          #+#    #+#             */
/*   Updated: 2018/10/05 09:34:59 by fabbenbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void  ft_putendl(char const *s)
{
  ft_putstr(s);
  ft_putchar('\n');
}
int main(void)
{
	char *str = "test";
	ft_putendl(str);
	return (0);
}
