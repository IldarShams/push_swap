/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 15:44:00 by smaegan           #+#    #+#             */
/*   Updated: 2022/01/22 20:19:54 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	a_sorted_n(t_stack *s, int n)
{
	t_node	*temp;
	int		i;

	i = 0;
	if (count(s) == 0 || count(s) == 1)
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
	if (count(s) == 0 || count(s) == 1)
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

void	find_pivot(t_stack *s, int n)
{
}

int	quick_sort_a(t_stack *a, t_stack *b, int n)
{
	int	steps;
	int	a_count;
	int	b_count;
	int	pivot;
	int	i;

	steps = 0;
	i = 0;
	if (a_sorted_n(b, n))
	{
		while (n != 0)
		{
			steps++;
			pb(a, b);
			n--;
		}
		return (steps);
	}
	b_count = 0;
	a_count = n;
	pivot = a->top->content;
	ra(a);
	steps++;
	while (steps != n)
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
	while (i < a_count)
	{
		i++;
		steps++;
		rra(a);
	}
	quick_sort_b(a, b, b_count);
	quick_sort_a(a, b, a_count);
	return (steps);
}

int	quick_sort_b(t_stack *a, t_stack *b, int n)
{
	int	steps;
	int	a_count;
	int	b_count;
	int	pivot;
	int	i;

	steps = 0;
	i = 0;
	if (b_sorted_n(b, n))
		return (0);
	b_count = n;
	a_count = 0;
	pivot = b->top->content;
	rb(b);
	steps++;
	while (steps != n)
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
	while (i < b_count)
	{
		i++;
		steps++;
		rrb(b);
	}
	quick_sort_b(a, b, b_count);
	quick_sort_a(a, b, a_count);
	printf("a_count: %d, b_count: %d", a_count, b_count);
	return (steps);
}

int	quick_sort(t_stack *a, t_stack *b)
{
	int		steps;
	int		pivot;

	if (sorted(a))
		return (0);
	pivot = a->top->content;
	ra(a);
	steps = 1;
	while (a->top->content != pivot)
	{
		if (pivot > a->top->content)
			pb(a, b);
		else
			ra(a);
		steps++;
	}
	steps += quick_sort_b(a, b, count(b));
	steps += quick_sort_a(a, b, count(a));
	printf("a_count: %d, b_count: %d", count(a), count(b));
	return (steps);
}
