/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 00:27:40 by hoylee            #+#    #+#             */
/*   Updated: 2020/07/01 17:05:08 by hoylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t a;

	a = 0;
	while (a < len)
	{
		((unsigned char*)b)[a] = (unsigned char)c;
		a++;
	}
	return (b);
}
