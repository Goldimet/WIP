/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabbenbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 15:53:55 by fabbenbr          #+#    #+#             */
/*   Updated: 2018/10/04 16:13:18 by fabbenbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char	*ft_strnstr(const char *hay, const char *needle, size_t n)
{
	int				x;
	int				c;
	char			*temp;

	x = 0;
	temp = (char *)hay;
	if (needle[0] == '\0')
		return ((char *)hay);
	while (temp[x] && x <= (int)n)
	{
		c = 0;
		while (needle[c] == temp[c + x])
		{
			if (needle[c + 1] == '\0')
				return (temp + x);
			c++;
		}
		x++;
	}
	return (NULL);
}

int main(void)
{
	char *str1, *str2, *str3;
	str1 = "dit is een test";
	str2 = "een test";
	//str1 = "MZIRIBMZIRIBMZE123";
	//str2 = "MZIRIBMZE";
    str3 = ft_strnstr(str1, str2, 30);
	printf("%s", str3);
	return (0);
}
