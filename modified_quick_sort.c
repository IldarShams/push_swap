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

int	modified_quick_sort_a(t_stack *a, t_stack *b, int n, int rra_flag)
{
	int	steps;
	int	a_count;
	int	b_count;
	int	pivot;
	int	i;

	steps = 0;
	i = 0;
	if (a_sorted_n(a, n))
		return (0);
	b_count = 0;
	a_count = n;
	pivot = find_pivot_n(a, n);
	while (steps < n)
	{
		if (a->top->content < pivot)
		{
			a_count--;
			b_count++;
			pb(a, b);
		}
		else
			ra(a);
		steps++;
	}
	while (i < a_count && rra_flag != 0 && rra_flag != 1)
	{
		i++;
		steps++;
		rra(a);
	}
	if (a_count <= 4)
		steps += cocktail_sort_a2(a, b, a_count);
	else if (rra_flag == 0)
		steps += modified_quick_sort_a(a, b, a_count, 1);
	else if (rra_flag > 0)
		steps += modified_quick_sort_a(a, b, a_count, rra_flag);
	steps += modified_quick_sort_b(a, b, b_count, rra_flag);
	return (steps);
}

int	modified_quick_sort_b(t_stack *a, t_stack *b, int n, int rra_flag)
{
	int	steps;
	int	a_count;
	int	b_count;
	int	pivot;
	int	i;

	steps = 0;
	i = 0;
	if (b_sorted_n(b, n))
	{
		while (n != 0)
		{
			steps++;
			pa(a, b);
			n--;
		}
		return (steps);
	}
	b_count = n;
	a_count = 0;
	pivot = find_pivot_n(b, n);
	if (n == 2)
	{
		steps++;
		sb(b);
	}
	else
	{
		while (steps != n && n != 2)
		{
			if (b->top->content > pivot)
			{
				a_count++;
				b_count--;
				pa(a, b);
			}
			else
				rb(b);
			steps++;
		}
		while (i < b_count && rra_flag)
		{
			i++;
			steps++;
			rrb(b);
		}
	}
	if (a_count <= 4)
		steps += cocktail_sort_a2(a, b, a_count);
	else
		steps += modified_quick_sort_a(a, b, a_count, 2);
	steps += modified_quick_sort_b(a, b, b_count, rra_flag);
	return (steps);
}

int	modified_quick_sort(t_stack *a, t_stack *b)
{
	int	steps;

	if (sorted(a))
		return (0);
	if (count(a) <= 4)
		steps = cocktail_sort_a2(a, b, count(a));
	else
		steps = modified_quick_sort_a(a, b, count(a), 0);
	return (steps);
}
