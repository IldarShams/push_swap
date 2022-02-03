/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils7.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:37:18 by smaegan           #+#    #+#             */
/*   Updated: 2022/02/03 17:49:30 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotate(t_stack *a)
{
	t_node	*prev;
	t_node	*temp;

	if (a->top == NULL)
		return ;
	if (a->top->next == NULL)
		return ;
	prev = NULL;
	temp = a->top;
	while (temp->next != NULL)
	{
		prev = temp;
		temp = temp->next;
	}
	temp->next = a->top;
	prev->next = NULL;
	a->top = temp;
}

void	rrotate_rotate(t_stack *a, t_stack *b)
{
	rrotate(a);
	rrotate(b);
}
