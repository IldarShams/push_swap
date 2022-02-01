/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:08:45 by smaegan           #+#    #+#             */
/*   Updated: 2022/02/01 20:38:25 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sa2(t_stack *a)
{
	t_node	*f;
	t_node	*sec;

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

int	sb2(t_stack *b)
{
	t_node	*f;
	t_node	*sec;

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

int	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
	return (1);
}

void	put_index(t_stack *s)
{
	t_node	*min;
	t_node	*temp;
	int		i;

	i = 0;
	while (i <= count(s))
	{
		min = NULL;
		temp = s->top;
		while (temp != NULL && temp->index != -1)
			temp = temp->next;
		if (temp != NULL)
			min = temp;
		while (temp != NULL)
		{
			if (temp->content < min->content && temp->index == -1)
				min = temp;
			temp = temp->next;
		}
		if (min != NULL)
			min->index = i;
		i++;
	}
}



