/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:12:10 by smaegan           #+#    #+#             */
/*   Updated: 2022/01/27 15:27:55 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ra(t_stack *a)
{
	t_node	*temp;

	write(1, "ra\n", 3);
	if (a->top == NULL)
		return (0);
	if (a->top->next == NULL)
		return (0);
	temp = a->top;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = a->top;
	a->top = a->top->next;
	temp->next->next = NULL;
	return (1);
}

int	rb(t_stack *b)
{
	t_node	*temp;

	write(1, "rb\n", 3);
	if (b->top == NULL)
		return (0);
	if (b->top->next == NULL)
		return (0);
	temp = b->top;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = b->top;
	b->top = b->top->next;
	temp->next->next = NULL;
	return (1);
}

int	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
	return (1);
}

int	rra(t_stack *a)
{
	t_node	*prev;
	t_node	*temp;

	if (a->top == NULL)
		return (0);
	if (a->top->next == NULL)
		return (0);
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
	return (1);
}

int	rrb(t_stack *b)
{
	t_node	*prev;
	t_node	*temp;

	write(1, "rrb\n", 4);
	if (b->top == NULL)
		return (0);
	if (b->top->next == NULL)
		return (0);
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
	return (1);
}
