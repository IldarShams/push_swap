/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:54:53 by smaegan           #+#    #+#             */
/*   Updated: 2022/01/21 16:44:19 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted(t_stack *s)
{
	t_node	*temp;

	if (count(s) == 0 || count(s) == 1)
		return (1);
	temp = s->top;
	while (temp->next != NULL && temp->content < temp->next->content)
		temp = temp->next;
	if (temp->next == NULL)
		return (1);
	else
		return (0);
}

int	count(t_stack *s)
{
	int		x;
	t_node	*temp;

	if (s->top == NULL)
		return (0);
	x = 0;
	temp = s->top;
	while (temp != NULL)
	{
		x++;
		temp = temp->next;
	}
	return (x);
}

int	direct_find_elem(t_stack *s, int elem)
{
	int		x;
	t_node	*temp;

	if (s == NULL || count(s) == 0)
		return (0);
	x = 0;
	temp = s->top;
	while (temp != NULL && temp->content != elem)
	{
		x++;
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	else
		return (x);
}

int	reverse_find_elem(t_stack *s, int elem)
{
	int		x;
	t_node	*temp;

	if (s == NULL || count(s) == 0)
		return (0);
	x = 0;
	temp = s->top;
	if (s->top->content == elem)
		return (0);
	while (temp != NULL && temp->content != elem)
		temp = temp->next;
	if (temp == NULL)
		return (-1);
	while (temp != NULL)
	{
		x++;
		temp = temp->next;
	}
	return (x);
}
