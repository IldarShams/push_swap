/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modified_quick_sort.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:03:35 by smaegan           #+#    #+#             */
/*   Updated: 2022/01/29 16:03:35 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	modified_quick_sort_a(t_stack *a, t_stack *b, int n, int rra_flag)
{
	t_Jo	jo;

	jo.i = 0;
	jo.b_count = 0;
	jo.a_count = n;
	jo.pivot = find_pivot_n(a, n);
	while (n-- > 0 && lil_check_a(a, jo.pivot, jo.a_count))
	{
		if (a->top->content <= jo.pivot)
		{
			jo.a_count--;
			jo.b_count += pb(a, b);
		}
		else
			jo.i += ra(a);
	}
	while (jo.i-- > 0 && rra_flag != 0 && rra_flag != 1)
		rra(a);
	if (jo.a_count <= 5 && !a_sorted_n(a, jo.a_count))
		cocktail_sort_a2(a, b, jo.a_count);
	else if (rra_flag == 0 && !a_sorted_n(a, jo.a_count))
		modified_quick_sort_a(a, b, jo.a_count, 1);
	else if (rra_flag > 0 && !a_sorted_n(a, jo.a_count))
		modified_quick_sort_a(a, b, jo.a_count, rra_flag);
	modified_quick_sort_b(a, b, jo.b_count, rra_flag);
}

void	b_check(t_stack *a, t_stack *b, int n)
{
	if (n == 2 && !b_sorted_n(b, n))
		sb(b);
	while (n-- > 0)
		pa(a, b);
}

void	modified_quick_sort_b(t_stack *a, t_stack *b, int n, int rra_flag)
{
	t_Jo	jo;

	jo.i = 0;
	if (b_sorted_n(b, n) || n == 2)
		return (b_check(a, b, n));
	jo.b_count = n;
	jo.a_count = 0;
	jo.pivot = find_pivot_n(b, n);
	while (n-- > 0 && lil_check_b(b, jo.pivot, jo.b_count))
	{
		if (b->top->content >= jo.pivot)
		{
			jo.a_count += pa(a, b);
			jo.b_count--;
		}
		else
			jo.i += rb(b);
	}
	while (jo.i-- > 0 && rra_flag)
		rrb(b);
	if (jo.a_count <= 5)
		cocktail_sort_a2(a, b, jo.a_count);
	else
		modified_quick_sort_a(a, b, jo.a_count, 2);
	modified_quick_sort_b(a, b, jo.b_count, rra_flag);
}

void	modified_quick_sort(t_stack *a, t_stack *b)
{
	if (sorted(a))
		return ;
	if (count(a) <= 5)
		small_stack_sort(a, b, count(a));
	else
		modified_quick_sort_a(a, b, count(a), 0);
}
