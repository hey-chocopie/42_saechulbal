/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 00:24:17 by hoylee            #+#    #+#             */
/*   Updated: 2020/07/13 14:56:44 by hoylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list *aa;

	if (lst == 0)
		return ;
	while ((*lst) != 0)
	{
		aa = (*lst)->next;
		free(*lst);
		(*lst) = aa;
	}
}
