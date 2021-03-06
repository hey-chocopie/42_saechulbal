/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoylee <hoylee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 16:04:31 by hoylee            #+#    #+#             */
/*   Updated: 2021/06/05 16:14:46 by hoylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		swap(t_list **start)
{
	int tmp;

	if ((*start) != 0)
	{
		tmp = (*start)->content;
		(*start)->content = ((*start)->next)->content;
		((*start)->next)->content = tmp;
	}
}

void		sa(t_list **stack_a, t_sd *s_data)
{
	swap(stack_a);
	pre_value("sa\0", s_data);
}

void		sb(t_list **stack_b, t_sd *s_data)
{
	swap(stack_b);
	pre_value("sb\0", s_data);
}

void		ss(t_list **stack_a, t_list **stack_b, t_sd *s_data)
{
	swap(stack_a);
	swap(stack_b);
	pre_value("ss\0", s_data);
}
