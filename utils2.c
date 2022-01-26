/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:12:10 by smaegan           #+#    #+#             */
/*   Updated: 2022/01/26 19:51:00 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *a)
{
	t_node	*temp;

	write(1, "ra\n", 3);
	if (a->top == NULL)
		return ;
	if (a->top->next == NULL)
		return ;
	temp = a->top;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = a->top;
	a->top = a->top->next;
	temp->next->next = NULL;
}

void	rb(t_stack *b)
{
	t_node	*temp;

	write(1, "rb\n", 3);
	if (b->top == NULL)
		return ;
	if (b->top->next == NULL)
		return ;
	temp = b->top;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = b->top;
	b->top = b->top->next;
	temp->next->next = NULL;
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
}

void	rra(t_stack *a)
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
	write(1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	t_node	*prev;
	t_node	*temp;

	write(1, "rrb\n", 4);
	if (b->top == NULL)
		return ;
	if (b->top->next == NULL)
		return ;
	prev = NULL;
	temp = b->top;
	while (temp->next != NULL)
	{
		prev = temp;
		temp = temp->next;
	}
	temp->next = b->top;
	prev->next = NULL;
	b->top = temp;
}
