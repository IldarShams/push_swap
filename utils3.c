/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:57:12 by smaegan           #+#    #+#             */
/*   Updated: 2022/01/25 18:44:03 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*init_stack(void)
{
	t_stack	*s;

	s = (t_stack *)malloc(sizeof(t_stack));
	s->top = NULL;
	return (s);
}

void	free_stack(t_stack *s)
{
	t_node	*current;
	t_node	*next;

	current = s->top;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

void	push(t_stack *s, int elem)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	new_node->content = elem;
	new_node->next = s->top;
	s->top = new_node;
}

int	swap_stack(t_stack *s)
{
	t_node	*f;
	t_node	*sec;

	if (s->top == NULL)
		return (1);
	if (s->top->next == NULL)
		return (1);
	f = s->top;
	sec = f->next;
	f->next = sec->next;
	sec->next = f;
	s->top = sec;
	return (0);
}

int	show(int d, t_stack *s)
{
	int		x;
	t_node	*temp;

	if (s == NULL)
		return (0);
	x = 0;
	temp = s->top;
	while (temp != NULL)
	{
		ft_putnbr_fd(temp->content, d);
		write(d, "	", 1);
		ft_putnbr_fd(temp->index, d);
		temp = temp->next;
		write(d, "\n", 1);
		x++;
	}
	return (x);
}
