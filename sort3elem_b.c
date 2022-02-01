/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3elem_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:19:01 by smaegan           #+#    #+#             */
/*   Updated: 2022/02/01 17:37:28 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.h"

// int	sort3elemwithparam_b(t_stack *a, t_stack *b, int n)
// {
// 	int		f;
// 	int		sec;
// 	int		t;

// 	if (n <= 2)
// 		return (cocktail_sort_b2(a, b, n));
// 	f = b->top->content;
// 	sec = (b)->top->next->content;
// 	t = (b)->top->next->next->content;
// 	if (f > sec && f > t && sec > t)
// 	{
// 		pa(a, b);
// 		pa(a, b);
// 		pa(a, b);
// 		return (3);
// 		//3 2 1
// 	}
// 	else if (f > sec && f > t && sec < t)
// 	{
// 		pa(a, b);
// 		sb(b);
// 		pa(a, b);
// 		pa(a, b);
// 		return (4);
// 		// 3 1 2
// 	}
// 	else if (f > sec && f < t && sec < t)
// 	{
// 		rb(b);
// 		sb(b);
// 		pa(a, b);
// 		rrb(b);
// 		pa(a, b);
// 		pa(a, b);
// 		return (6);
// 		// 2 1 3
// 	}
// 	else if (f < sec && f > t && sec > t)
// 	{
// 		sb(b);
// 		pa(a, b);
// 		pa(a, b);
// 		pa(a, b);
// 		return (4);
// 		// 2 3 1
// 	}
// 	else if (f < sec && f < t && sec < t)
// 	{
// 		rb(b);
// 		sb(b);
// 		pa(a, b);
// 		pa(a, b);
// 		rrb(b);
// 		pa(a, b);
// 		return (6);
// 		// 1 2 3
// 	}
// 	else if (f < sec && f < t && sec > t)
// 	{
// 		sb(b);
// 		pa(a, b);
// 		sb(b);
// 		pa(a, b);
// 		pa(a, b);
// 		return (5);
// 		// 1 3 2
// 	}
// 	else
// 		return (0);
// }
