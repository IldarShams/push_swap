// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   small_stack_sort.c                                 :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2022/01/25 14:57:59 by smaegan           #+#    #+#             */
// /*   Updated: 2022/01/26 20:01:40 by smaegan          ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "push_swap.h"

// int	find_min_n(t_stack *s, int n)
// {
// 	int		min;
// 	t_node	*tmp;

// 	if (count(s) < n)
// 		n = count(s);
// 	if (s == NULL || n == 0)
// 		return (0);
// 	if (n == 1)
// 		return (s->top->content);
// 	min = s->top->content;
// 	tmp = s->top->next;
// 	while (n > 1)
// 	{
// 		if (tmp->content < min)
// 			min = tmp->content;
// 		n--;
// 		tmp = tmp->next;
// 	}
// 	return (min);
// }

// int	small_stack_sort_a(t_stack *a, t_stack *b, int n)
// {
// 	int	steps;
// 	int	m;

// 	m = 1;
// 	steps = 0;
// 	if (count(a) < n)
// 		n = count(a);
// 	if (n == 0 || n == 1)
// 		return (0);
// 	while (!a_sorted_n(a, n))
// 	{
// 		while (m < n && !a_sorted_n(a, n - m + 1))
// 		{
// 			if (a->top->content > a->top->next->content)
// 			{
// 				sa(a);
// 				steps++;
// 			}
// 			if (!a_sorted_n(a, n - m + 1))
// 			{
// 				pb(a, b);
// 				steps++;
// 				m++;
// 			}
// 		}
// 		while (m > 1)
// 		{
// 			pa(a, b);
// 			steps++;
// 			m--;
// 		}
// 	}
// 	return (steps);
// }
