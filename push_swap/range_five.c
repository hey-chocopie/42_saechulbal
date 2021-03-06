/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range_five.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoylee <hoylee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 16:05:47 by hoylee            #+#    #+#             */
/*   Updated: 2021/06/05 17:40:58 by hoylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		min_next_v(t_list **stack, int min, int depth)
{
	int		i;
	int		min_v;
	t_list	*tmp;

	tmp = (*stack);
	i = 0;
	min_v = 2147483647;
	while (i < depth)
	{
		if (tmp->content < min_v && tmp->content > min)
			min_v = tmp->content;
		tmp = tmp->next;
		i++;
	}
	return (min_v);
}

void	range_five(t_list **stack_a, t_list **stack_b, t_sd *s_data)
{
	int i;

	i = min_next_v(stack_a, min_value(stack_a, 5), 5);
	while (s_data->ca != 3)
	{
		if ((*stack_a)->content != i && (*stack_a)->content
							== min_value(stack_a, s_data->ca))
		{
			pb(stack_a, stack_b, s_data);
			if (s_data->ca == 3)
				sb(stack_b, s_data);
		}
		else if ((*stack_a)->content == i)
			pb(stack_a, stack_b, s_data);
		else
			ra(stack_a, s_data);
	}
	two_three_optimization(stack_a, s_data, 3);
	pa(stack_a, stack_b, s_data);
	pa(stack_a, stack_b, s_data);
	return ;
}
