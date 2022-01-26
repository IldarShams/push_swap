/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:02:42 by smaegan           #+#    #+#             */
/*   Updated: 2022/01/26 19:50:07 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	t_node	*f;
	t_node	*sec;

	write(1, "sa\n", 3);
	if (a->top == NULL)
		return ;
	if (a->top->next == NULL)
		return ;
	f = a->top;
	sec = f->next;
	f->next = sec->next;
	sec->next = f;
	a->top = sec;
}

void	sb(t_stack *b)
{
	t_node	*f;
	t_node	*sec;

	write(1, "sb\n", 3);
	if (b->top == NULL)
		return ;
	if (b->top->next == NULL)
		return ;
	f = b->top;
	sec = f->next;
	f->next = sec->next;
	sec->next = f;
	b->top = sec;
}

void	ss(t_stack *a, t_stack *b)
{
	write(1, "ss\n", 3);
	sa(a);
	sb(b);
}

void	pa(t_stack *a, t_stack *b)
{
	t_node	*temp;

	write(1, "pa\n", 3);
	if (b->top == NULL)
		return ;
	temp = b->top;
	b->top = b->top->next;
	temp->next = a->top;
	a->top = temp;
	g++;
}

void	pb(t_stack *a, t_stack *b)
{
	t_node	*temp;

	write(1, "pb\n", 3);
	if (a->top == NULL)
		return ;
	temp = a->top;
	a->top = a->top->next;
	temp->next = b->top;
	b->top = temp;
	g++;
}
