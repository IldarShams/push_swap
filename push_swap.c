/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:48:40 by smaegan           #+#    #+#             */
/*   Updated: 2022/01/21 17:17:45 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	find_min(t_stack *s)
{
	int		x;
	t_node	*temp;

	if (count(s) == 0)
		return (INT32_MIN);
	x = INT32_MAX;
	temp = s->top;
	while (temp != NULL)
	{
		if (x > temp->content)
			x = temp->content;
		temp = temp->next;
	}
	return (x);
}

int	selection_sort(void)
{
	int	min;
	int	rotate_steps;
	int	rrotate_steps;
	int	x;

	x = 0;
	if (sorted(&a))
		return (0);
	while (count(&a) != 2)
	{
		min = find_min(&a);
		rotate_steps = direct_find_elem(&a, min);
		rrotate_steps = reverse_find_elem(&a, min);
		if (rotate_steps < rrotate_steps)
		{
			while (rotate_steps-- > 0)
			{
				x++;
				ra();
			}
		}
		else
		{
			while (rrotate_steps-- > 0)
			{
				rra();
				x++;
			}
		}
		pb();
		x++;
	}
	if (!sorted(&a))
	{
		sa();
		x++;
	}
	printf("a:\n");
	show(1, &a);
	printf("----------\n\n");
	printf("b:\n");
	show(1, &b);
	printf("----------\n\n");
	while (count(&b) != 0)
	{
		x++;
		pa();
	}
	return (x);
}

int	main(int argc, char **argv)
{
	int		x;

	x = argc - 1;
	while (x > 0)
	{
		push(&a, ft_atoi(argv[x]));
		x--;
	}
	printf("not sorted a:\n");
	show(1, &a);
	printf("----------\n\n");
	// printf("	count:%d\n", count(&a));
	// printf("	%d\n", find_min(&a));
	// printf("	%d\n", direct_find_elem(&a, 1));
	// printf("	%d\n", direct_find_elem(&a, -1));
	// printf("	%d\n", direct_find_elem(&a, -2));
	// printf("\n");
	// printf("	%d\n", reverse_find_elem(&a, 1));
	// printf("	%d\n", reverse_find_elem(&a, 100));
	// printf("	%d\n", reverse_find_elem(&a, 20));
	printf("		steps:%d\n", selection_sort());
	printf("sorted a:\n");
	show(1, &a);
	printf("----------\n\n");
	free_stack(&a);
}
