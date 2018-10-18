/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabbenbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 15:17:06 by fabbenbr          #+#    #+#             */
/*   Updated: 2018/10/18 10:07:43 by fabbenbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(tlist **alst, void (*del)(void *, size_t))
{
	if (!alst || !del)
		return (0);
	del(&((*alst)->content), (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
