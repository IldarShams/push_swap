/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:08:45 by smaegan           #+#    #+#             */
/*   Updated: 2022/01/25 18:48:13 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
}

void put_index(t_stack *s)
{
	t_node	*prev_min;
	t_node	*min;
	t_node	*temp;

	prev_min = NULL;
	min = s->top;
	temp = s->top->next;
	while (temp != NULL)
	{
		if (temp->content < min->content)
		{
			
		}
	}
}
