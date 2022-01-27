/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:08:45 by smaegan           #+#    #+#             */
/*   Updated: 2022/01/27 15:07:19 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
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
