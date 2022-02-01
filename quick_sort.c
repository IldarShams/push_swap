/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 15:44:00 by smaegan           #+#    #+#             */
/*   Updated: 2022/02/01 17:38:49 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_pivot_n(t_stack *s, int n)
{
	int		max_index;
	int		min_index;
	t_node	*temp;
	int		i;

	if (n < 2)
		return (s->top->content);
	i = 0;
	temp = s->top;
	max_index = -1;
	min_index = INT_MAX;
	while (i < n)
	{
		i++;
		if (temp->index > max_index)
			max_index = temp->index;
		if (temp->index < min_index)
			min_index = temp->index;
		temp = temp->next;
	}
	temp = s->top;
	i = 0;
	while (i < n && temp->index != (min_index + max_index) / 2)
		temp = temp->next;
	return (temp->content);
}

int	a_sorted_n(t_stack *s, int n)
{
	t_node	*temp;
	int		i;

	i = 0;
	if (n == 0 || n == 1)
		return (1);
	temp = s->top;
	while (temp->next != NULL && temp->content <= temp->next->content
		&& n - 2 >= i)
	{
		i++;
		temp = temp->next;
	}
	if (n - 1 == i)
		return (1);
	else
		return (0);
}

int	b_sorted_n(t_stack *s, int n)
{
	t_node	*temp;
	int		i;

	i = 0;
	if (n == 0 || n == 1)
		return (1);
	temp = s->top;
	while (temp->next != NULL && temp->content >= temp->next->content
		&& n - 2 >= i)
	{
		i++;
		temp = temp->next;
	}
	if (n - 1 == i)
		return (1);
	else
		return (0);
}

// int	pure_quick_sort_a(t_stack *a, t_stack *b, int n, int rra_flag)
// {
// 	int	steps;
// 	int	a_count;
// 	int	b_count;
// 	int	pivot;
// 	int	i;

// 	steps = 0;
// 	i = 0;
// 	if (a_sorted_n(a, n))
// 		return (0);
// 	b_count = 0;
// 	a_count = n;
// 	pivot = find_pivot_n(a, n);
// 	if (n == 2)
// 	{
// 		steps++;
// 		sa(a);
// 	}
// 	else
// 	{
// 		while (steps < n)
// 		{
// 			if (a->top->content < pivot)
// 			{
// 				a_count--;
// 				b_count++;
// 				pb(a, b);
// 			}
// 			else
// 				ra(a);
// 			steps++;
// 		}
// 		while (i < a_count && rra_flag != 0 && rra_flag != 1)
// 		{
// 			i++;
// 			steps++;
// 			rra(a);
// 		}
// 	}
// 	if (rra_flag == 0)
// 		steps += pure_quick_sort_a(a, b, a_count, 1);
// 	else if (rra_flag > 0)
// 		steps += pure_quick_sort_a(a, b, a_count, rra_flag);
// 	steps += pure_quick_sort_b(a, b, b_count, rra_flag);
// 	return (steps);
// }

// int	pure_quick_sort_b(t_stack *a, t_stack *b, int n, int rra_flag)
// {
// 	int	steps;
// 	int	a_count;
// 	int	b_count;
// 	int	pivot;
// 	int	i;

// 	steps = 0;
// 	i = 0;
// 	if (b_sorted_n(b, n))
// 	{
// 		while (n != 0)
// 		{
// 			steps++;
// 			pa(a, b);
// 			n--;
// 		}
// 		return (steps);
// 	}
// 	b_count = n;
// 	a_count = 0;
// 	pivot = find_pivot_n(b, n);
// 	if (n == 2)
// 	{
// 		steps++;
// 		sb(b);
// 	}
// 	else
// 	{
// 		while (steps != n && n != 2)
// 		{
// 			if (b->top->content > pivot)
// 			{
// 				a_count++;
// 				b_count--;
// 				pa(a, b);
// 			}
// 			else
// 				rb(b);
// 			steps++;
// 		}
// 		while (i < b_count && rra_flag)
// 		{
// 			i++;
// 			steps++;
// 			rrb(b);
// 		}
// 	}
// 	steps += pure_quick_sort_a(a, b, a_count, 2);
// 	steps += pure_quick_sort_b(a, b, b_count, rra_flag);
// 	return (steps);
// }

// int	pure_quick_sort(t_stack *a, t_stack *b)
// {
// 	int	steps;

// 	if (sorted(a))
// 		return (0);
// 	steps = pure_quick_sort_a(a, b, count(a), 0);
// 	return (steps);
// }
