/* ************************************************************************** */
/*																			*/
/*														:::	 ::::::::   */
/*   small_stack_sort.c								:+:	 :+:	:+:   */
/*													+:+ +:+		+:+	*/
/*   By: smaegan <smaegan@student.42.fr>			+#+  +:+	  +#+		*/
/*												+#+#+#+#+#+   +#+		  */
/*   Created: 2022/01/29 16:10:08 by smaegan		  #+#	#+#			*/
/*   Updated: 2022/01/29 16:38:35 by smaegan		 ###   ########.fr	  */
/*																			*/
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

void	cocktail_sort_a2(t_stack *a, t_stack *b, int a_n)
{
	int	b_n;
	int	i;

	b_n = 0;
	i = 0;
	while (!a_sorted_n(a, a_n - b_n))
	{
		while (!a_sorted_n(a, a_n - b_n))
		{
			if (a->top->content > a->top->next->content)
				sa(a);
			if (!a_sorted_n(a, a_n - b_n))
				b_n += pb(a, b);
		}
		while (b_n - i > 0)
		{
			pa(a, b);
			if (a->top->content > a->top->next->content)
				sa(a);
			b_n--;
		}
		i++;
	}
	pa_n(a, b, --i);
}

void	sort3elem(t_stack *a)
{
	int		sec;
	int		t;

	sec = a->top->next->content;
	t = a->top->next->next->content;
	if (sec < a->top->content && a->top->content < t)
		sa(a);
	else if (a->top->content < sec && sec > t && t > a->top->content)
	{
		sa(a);
		ra(a);
	}
	else if (a->top->content < sec && a->top->content > t)
		rra(a);
	else if (a->top->content > sec && sec > t)
	{
		ra(a);
		sa(a);
	}
	else if (a->top->content < sec && sec > t && t < a->top->content)
		sa(a);
	else if (a->top->content > sec && a->top->content > sec && sec < t)
		ra(a);
}

int	searchmin(t_stack *a)
{
	int		m;
	t_node	*tmp;

	m = a->top->content;
	tmp = a->top->next;
	while (tmp != NULL)
	{
		if (m > tmp->content)
			m = tmp->content;
		tmp = tmp->next;
	}
	return (m);
}

void	sort4elem(t_stack *a, t_stack *b)
{
	int	i;

	i = direct_find_elem(a, searchmin(a));
	while (i > 0)
	{
		ra(a);
		i--;
	}
	while (i < 0)
	{
		rra(a);
		i++;
	}
	pb(a, b);
	sort3elem(a);
	pa(a, b);
}

// void	cocktail_sort_b2(t_stack *a, t_stack *b, int b_n)
// {
// 	int	a_n;
// 	int	i;

// 	a_n = 0;
// 	i = 0;
// 	if (count(b) < b_n)
// 		b_n = count(b);
// 	while (!b_sorted_n(b, b_n - a_n))
// 	{
// 		while (!b_sorted_n(b, b_n - a_n))
// 		{
// 			if (b->top->content < b->top->next->content)
// 				sb(b);
// 			if (!b_sorted_n(b, b_n - a_n))
// 				a_n += pa(a, b);
// 		}
// 		while (a_n - i > 0)
// 		{
// 			pb(a, b);
// 			if (b->top->content < b->top->next->content)
// 				sb(b);
// 			a_n--;
// 		}
// 		i++;
// 	}
// 	while (a_n < b_n)
// 		a_n += pa(a, b);
// }
