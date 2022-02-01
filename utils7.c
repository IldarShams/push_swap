/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils7.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:37:18 by smaegan           #+#    #+#             */
/*   Updated: 2022/02/01 20:38:01 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lil_check_b(t_stack *b, int pivot, int n)
{
	t_node	*temp;

	if (count(b) < n)
		n = count(b);
	if (n == 0 || n == 1)
		return (0);
	temp = b->top;
	while (n-- > 0)
	{
		if (temp->content >= pivot)
			return (1);
		temp = temp->next;
	}
	return (0);
}


int	lil_check_a(t_stack *a, int pivot, int n)
{
	t_node	*temp;

	if (count(a) < n)
		n = count(a);
	if (n == 0 || n == 1)
		return (0);
	temp = a->top;
	while (n-- > 0)
	{
		if (temp->content <= pivot)
			return (1);
		temp = temp->next;
	}
	return (0);
}
