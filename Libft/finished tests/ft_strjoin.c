/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabbenbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 14:53:00 by fabbenbr          #+#    #+#             */
/*   Updated: 2018/10/08 15:06:19 by fabbenbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*tempcat;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	if ((tempcat = (char *)malloc(sizeof(i + j + 1))) == NULL)
		return (NULL);
	ft_strcpy(tempcat, s1);
	tempcat = ft_strcat(tempcat, s2);
	return (tempcat);
}

int main (void)
{
	char *str, *str2, *str3;

	str = "dit test om te zien";
	str2 = "of de 2 strings samen worden gezet";
	str3 = ft_strjoin(str, str2);
	printf("%s", str3);
	return (0);
}
