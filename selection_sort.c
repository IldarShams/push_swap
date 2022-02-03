/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 15:39:45 by smaegan           #+#    #+#             */
/*   Updated: 2022/02/03 20:11:35 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.h"

// int	find_min(t_stack *s)
// {
// 	int		x;
// 	t_node	*temp;

// 	if (count(s) == 0)
// 		return (INT32_MIN);
// 	x = INT32_MAX;
// 	temp = s->top;
// 	while (temp != NULL)
// 	{
// 		if (x > temp->content)
// 			x = temp->content;
// 		temp = temp->next;
// 	}
// 	return (x);
// }

// int	selection_sort(void)
// {
// 	int	min;
// 	int	rotate_steps;
// 	int	rrotate_steps;
// 	int	x;

// 	x = 0;
// 	if (sorted(&a))
// 		return (0);
// 	while (count(&a) != 2)
// 	{
// 		min = find_min(&a);
// 		rotate_steps = direct_find_elem(&a, min);
// 		rrotate_steps = reverse_find_elem(&a, min);
// 		if (rotate_steps < rrotate_steps)
// 		{
// 			while (rotate_steps-- > 0)
// 			{
// 				x++;
// 				ra();
// 			}
// 		}
// 		else
// 		{
// 			while (rrotate_steps-- > 0)
// 			{
// 				rra();
// 				x++;
// 			}
// 		}
// 		pb();
// 		x++;
// 	}
// 	if (!sorted(&a))
// 	{
// 		sa();
// 		x++;
// 	}
// 	printf("a:\n");
// 	show(1, &a);
// 	printf("----------\n\n");
// 	printf("b:\n");
// 	show(1, &b);
// 	printf("----------\n\n");
// 	while (count(&b) != 0)
// 	{
// 		x++;
// 		pa();
// 	}
// 	return (x);
// }
