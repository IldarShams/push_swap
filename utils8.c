/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils8.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:38:51 by smaegan           #+#    #+#             */
/*   Updated: 2022/02/01 20:46:16 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *s)
{
	t_node	*f;
	t_node	*sec;


	if (s->top == NULL)
		return (0);
	if (s->top->next == NULL)
		return (0);
	f = s->top;
	sec = f->next;
	f->next = sec->next;
	sec->next = f;
	s->top = sec;
}

void	swap_swap(t_stack *s1, t_stack *s2)
{
	swap(s1);
	swap(s2);
}

void	push_a(t_stack *a, t_stack *b)
{
	t_node	*temp;

	if (b->top == NULL)
		return (0);
	temp = b->top;
	b->top = b->top->next;
	temp->next = a->top;
	a->top = temp;
}

void	rotate(t_stack *a)
{
	t_node	*temp;

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
}

void	rotate_rotate(t_stack *a, t_stack *b)
{
	rotate(a);
	rotate(b);
}

void	rrotate(t_stack *a)
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
}

void	rrotate_rotate(t_stack *a, t_stack *b)
{
	rrotate(a);
	rrotate(b);
}
