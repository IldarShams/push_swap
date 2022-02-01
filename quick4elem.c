/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick4elem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:45:11 by smaegan           #+#    #+#             */
/*   Updated: 2022/02/01 17:37:34 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.h"

// int	sort4elemwithparam(t_stack *a, t_stack *b, int n)
// {
// 	int	f;
// 	int	s;
// 	int	t;
// 	int	fo;

// 	if (count(a) < n)
// 		n = count(a);
// 	if (a_sorted_n(a, n))
// 		return (0);
// 	if (n <= 3)
// 		return (sort3elemwithparam(a, n));
// 	f = a->top->content;
// 	s = a->top->next->content;
// 	t = a->top->next->next->content;
// 	fo = a->top->next->next->next->content;
// 	if (f > s && f > t && f > fo && s > t && s > fo && t > fo)
// 	{
// 		ra(a);
// 		ra(a);
// 		pb(a, b);
// 		pb(a, b);
// 		rra(a);
// 		rra(a);
// 		ss(a, b);
// 		pa(a, b);
// 		pa(a, b);
// 		return (9);
// 	}
// 	else if (f > s && f > t && f > fo && s > t && s > fo && t < fo)
// 	{
// 		ra(a);
// 		ra(a);
// 		pb(a, b);
// 		pb(a, b);
// 		rra(a);
// 		rra(a);
// 		sa(a);
// 		pa(a, b);
// 		pa(a, b);
// 		return (9);
// 	}
// 	else if (f > s && f > t && f > fo && s < t && s < fo && t < fo)
// 	{
// 		sa(a);
// 		pb(a, b);
// 		sa(a);
// 		pb(a, b);
// 		sa(a);
// 		pa(a, b);
// 		pa(a, b);
// 		return (7);
// 	}
// 	else if (f > s && f > t && f > fo && s < t && s < fo && t > fo)
// 	{
// 		sa(a);
// 		pb(a, b);
// 		sa(a);
// 		ra(a);
// 		sa(a);
// 		rra(a);
// 		sa(a);
// 		pa(a, b);
// 		return (8);
// 	}
// 	else if (f > s && f > t && f > fo && s < t && s > fo && t > fo)
// 	{
// 		ra(a);
// 		pb(a, b);
// 		sa(a);
// 		pb(a, b);
// 		rra(a);
// 		ss(a, b);
// 		pa(a, b);
// 		pa(a, b);
// 		return (8);
// 	}
// 	else if (f > s && f > t && f > fo && s < t && s > fo && t < fo)
// 	{
// 		ra(a);
// 		pb(a, b);
// 		pb(a, b);
// 		rra(a);
// 		ss(a, b);
// 		pa(a, b);
// 		pa(a, b);
// 		return (7);
// 	}
// 	else if (f > s && f > t && f < fo && s < t && s < fo && t < fo)
// 	{
// 		sa(a);
// 		ra(a);
// 		sa(a);
// 		rra(a);
// 		return (4);
// 	}
// 	else if (f > s && f < t && f > fo && s < t && s < fo && t > fo)
// 	{
// 		ra(a);
// 		pb(a, b);
// 		sa(a);
// 		rra(a);
// 		sa(a);
// 		pa(a, b);
// 		return (6);
// 	}
// 	else if (f > s && f < t && f > fo && s < t && s > fo && t > fo)
// 	{
// 		sa(a);
// 		ra(a);
// 		ra(a);
// 		sa(a);
// 		pb(a, b);
// 		rra(a);
// 		rra(a);
// 		pa(a, b);
// 		return (8);
// 	}
// 	else if (f > s && f > t && f < fo && s > t && s < fo && t < fo)
// 	{
// 		sa(a);
// 		ra(a);
// 		sa(a);
// 		rra(a);
// 		sa(a);
// 		return (5);
// 	}
// 	else if (f < s && f > t && f > fo && s > t && s > fo && t < fo)
// 	{
// 		ra(a);
// 		sa(a);
// 		pb(a, b);
// 		sa(a);
// 		rra(a);
// 		sa(a);
// 		pa(a, b);
// 		return (7);
// 	}
// 	else if (f < s && f > t && f > fo && s > t && s > fo && t > fo)
// 	{
// 		ra(a);
// 		sa(a);
// 		pb(a, b);
// 		sa(a);
// 		rra(a);
// 		sa(a);
// 		pa(a, b);
// 		sa(a);
// 		return (8);
// 	}
// 	else if (f > s && f < t && f < fo && s < t && s < fo && t < fo)
// 	{
// 		sa(a);
// 		return (1);
// 	}
// 	if (f > s && f < t && f < fo && s < t && s < fo && t > fo)
// 	{
// 		ra(a);
// 		pb(a, b);
// 		sa(a);
// 		rra(a);
// 		pa(a, b);
// 		return (5);
// 	}
// 	if (f < s && f < t && f > fo && s > t && s > fo && t < fo)
// 	{
// 		pb(a, b);
// 		sa(a);
// 		ra(a);
// 		sa(a);
// 		pa(a, b);
// 		rra(a);
// 		return (6);
// 	}
// 	if (f < s && f < t && f > fo && s > t && s > fo && t > fo)
// 	{
// 		pb(a, b);
// 		ra(a);
// 		sa(a);
// 		pb(a, b);
// 		rra(a);
// 		ss(a, b);
// 		pa(a, b);
// 		pa(a, b);
// 		return (8);
// 	}
// 	if (f < s && f > t && f < fo && s > t && s < fo && t < fo)
// 	{
// 		ra(a);
// 		ra(a);
// 		sa(a);
// 		pb(a, b);
// 		rra(a);
// 		rra(a);
// 		pa(a, b);
// 		return (7);
// 	}
// 	if (f < s && f > t && f < fo && s > t && s < fo && t < fo)
// 	{
// 		ra(a);
// 		sa(a);
// 		rra(a);
// 		sa(a);
// 		return (4);
// 	}
// 	if (f < s && f < t && f < fo && s < t && s < fo && t > fo)
// 	{
// 		ra(a);
// 		ra(a);
// 		sa(a);
// 		rra(a);
// 		rra(a);
// 		return (5);
// 	}
// 	if (f < s && f < t && f < fo && s > t && s > fo && t < fo)
// 	{
// 		ra(a);
// 		sa(a);
// 		ra(a);
// 		sa(a);
// 		rra(a);
// 		rra(a);
// 		return (6);
// 	}
// 	if (f < s && f < t && f < fo && s > t && s > fo && t > fo)
// 	{
// 		pb(a, b);
// 		sa(a);
// 		ra(a);
// 		sa(a);
// 		rra(a);
// 		sa(a);
// 		pa(a, b);
// 		return (7);
// 	}
// 	if (f < s && f < t && f < fo && s > t && s < fo && t < fo)
// 	{
// 		ra(a);
// 		sa(a);
// 		rra(a);
// 		return (3);
// 	}
// 	if (f < s && f < t && f < fo && s < t && s > fo && t > fo)
// 	{
// 		ra(a);
// 		ra(a);
// 		sa(a);
// 		rra(a);
// 		sa(a);
// 		rra(a);
// 		return (6);
// 	}
// 	return (cocktail_sort_a2(a, b, n));
// }
