/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabbenbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:34:36 by fabbenbr          #+#    #+#             */
/*   Updated: 2018/10/05 09:34:46 by fabbenbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putstr(char const *s)
{
  int i;

  i = 0;
  while (s[i] != '\0')
  {
      ft_putchar(s[i]);
      i++;
  }
}

int main(void)
{
	ft_putstr("test\n");
	ft_putstr("test\n");
	ft_putstr("test\n");
	ft_putstr("test\n");
	ft_putstr("test\n");
	return (0);
}
