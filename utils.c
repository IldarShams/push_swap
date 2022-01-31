/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:02:42 by smaegan           #+#    #+#             */
/*   Updated: 2022/01/31 19:01:04 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sa(t_stack *a)
{
	t_node	*f;
	t_node	*sec;

	write(1, "sa\n", 3);
	if (a->top == NULL)
		return (0);
	if (a->top->next == NULL)
		return (0);
	f = a->top;
	sec = f->next;
	f->next = sec->next;
	sec->next = f;
	a->top = sec;
	return (1);
}

int	sb(t_stack *b)
{
	t_node	*f;
	t_node	*sec;

	write(1, "sb\n", 3);
	if (b->top == NULL)
		return (0);
	if (b->top->next == NULL)
		return (0);
	f = b->top;
	sec = f->next;
	f->next = sec->next;
	sec->next = f;
	b->top = sec;
	return (1);
}

int	ss(t_stack *a, t_stack *b)
{
	write(1, "ss\n", 3);
	sa2(a);
	sb2(b);
	return (1);
}

int	pa(t_stack *a, t_stack *b)
{
	t_node	*temp;

	write(1, "pa\n", 3);
	if (b->top == NULL)
		return (0);
	temp = b->top;
	b->top = b->top->next;
	temp->next = a->top;
	a->top = temp;
	g++;
	return (1);
}

int	pb(t_stack *a, t_stack *b)
{
	t_node	*temp;

	write(1, "pb\n", 3);
	if (a->top == NULL)
		return (0);
	temp = a->top;
	a->top = a->top->next;
	temp->next = b->top;
	b->top = temp;
	g++;
	return (1);
}
