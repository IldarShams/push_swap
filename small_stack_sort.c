/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_stack_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:57:59 by smaegan           #+#    #+#             */
/*   Updated: 2022/01/27 16:39:53 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_index(t_stack *s, int n)
{
	int		index;
	t_node	*tmp;

	if (count(s) < n)
		n = count(s);
	if (s == NULL || n == 0)
		return (-1);
	if (n == 1)
		return (s->top->index);
	index = s->top->index;
	tmp = s->top->next;
	while (n > 1)
	{
		if (tmp->index < index)
			index = tmp->index;
		n--;
		tmp = tmp->next;
	}
	return (index);
}

int	small_stack_sort_a(t_stack *a, t_stack *b, int n)
{
	int	steps;
	int	m;

	m = 1;
	steps = 0;
	if (count(a) < n)
		n = count(a);
	if (n == 0)
		return (0);
	while (!a_sorted_n(a, n))
	{
		while (m < n && !a_sorted_n(a, n - m + 1))
		{
			if (a->top->content > a->top->next->content)
			{
				sa(a);
				steps++;
			}
			if (!a_sorted_n(a, n - m + 1))
			{
				pb(a, b);
				steps++;
				m++;
			}
		}
		while (m > 1)
		{
			pa(a, b);
			steps++;
			m--;
		}
	}
	while (n-- != 0)
		steps += pb(a, b);
	return (steps);
}

int	small_stack_sort_b(t_stack *a, t_stack *b, int n)
{
	int	steps;
	int	m;

	m = 1;
	steps = 0;
	if (count(b) < n)
		n = count(b);
	if (n == 0)
		return (0);
	while (!b_sorted_n(b, n))
	{
		while (m < n && !b_sorted_n(b, n - m + 1))
		{
			if (b->top->content < b->top->next->content)
			{
				sb(b);
				steps++;
			}
			if (!b_sorted_n(b, n - m + 1))
			{
				pa(a, b);
				steps++;
				m++;
			}
		}
		while (m > 1)
		{
			pb(a, b);
			steps++;
			m--;
		}
	}
	return (steps);
}

// int	direct_find_index_n(t_stack *s, int index, int n)
// {
// 	int		m;
// 	t_node	*temp;

// 	m = 0;
// 	if (s == NULL || n == 0)
// 		return (-1);
// 	temp = s->top;
// 	while (temp != NULL && m < n && temp->index != index)
// 	{
// 		m++;
// 		temp = temp->next;
// 	}
// 	if (m == n)
// 		return (-1);
// 	return (m);
// }

// int	small_stack_sort_a(t_stack *a, t_stack *b, int n)
// {
// 	int	m;
// 	int	index;
// 	int	steps;

// 	index = find_min_index(a, n);
// 	if (index == -1)
// 		return (0);
// 	if (n == 1)
// 		return (pb(a, b));
// 	m = 1;
// 	steps = 0;
// 	while (n != 0)
// 	{
// 		if (direct_find_index_n(a, index, n - m + 1))
// 		{
// 			while (a->top->index != index)
// 			{
// 				steps += ra(a);
// 				m++;
// 			}
// 		}
// 		else
// 		{
// 			while (a->top->index != index)
// 			{
// 				m--;
// 				steps += rra(a);
// 			}
// 		}
// 		index++;
// 		steps += pb(a, b);
// 		n--;
// 	}
// 	return (steps);
// }
