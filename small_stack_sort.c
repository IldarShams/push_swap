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

int	cocktail_sort_a(t_stack* a, t_stack* b, int a_n)
{
	int	steps;
	int	b_n;

	b_n = 0;
	steps = 0;
	if (count(a) < a_n)
		a_n = count(a);
	if (a_n == 0 || a_n == 1)
		return (0);
	while (!a_sorted_n(a, a_n - b_n))
	{
		while (!a_sorted_n(a, a_n - b_n))
		{
			if (a->top->content > a->top->next->content)
			{
				sa(a);
				steps++;
			}
			if (!a_sorted_n(a, a_n - b_n))
			{
				pb(a, b);
				steps++;
				b_n++;
			}
		}
		while (b_n > 0)
		{
			steps++;
			pa(a, b);
			if (a->top->content > a->top->next->content)
			{
				sa(a);
				steps++;
			}
			b_n--;
		}
	}
	return (steps);
 }

int	cocktail_sort_a2(t_stack* a, t_stack* b, int a_n)
{
	int	steps;
	int	b_n;
	int	i;

	b_n = 0;
	i = 0;
	steps = 0;
	if (count(a) < a_n)
		a_n = count(a);
	if (a_n == 0 || a_n == 1)
		return (0);
	while (!a_sorted_n(a, a_n - b_n))
	{
		while (!a_sorted_n(a, a_n - b_n))
		{
			if (a->top->content > a->top->next->content)
			{
				sa(a);
				steps++;
			}
			if (!a_sorted_n(a, a_n - b_n))
			{
				pb(a, b);
				steps++;
				b_n++;
			}
		}
		while (b_n - i > 0)
		{
			steps++;
			pa(a, b);
			if (a->top->content > a->top->next->content)
			{
				sa(a);
				steps++;
			}
			b_n--;
		}
		i++;
	}
	i--;
	while (i-- > 0)
	{
		steps++;
		pa(a, b);
	}
	return (steps);
}

int	cocktail_sort_b2(t_stack *a, t_stack *b, int b_n)
{
	int	steps;
	int	a_n;
	int	i;

	a_n = 0;
	i = 0;
	steps = 0;
	if (count(b) < b_n)
		b_n = count(b);
	if (b_n == 0 || b_n == 1)
		return (0);
	while (!b_sorted_n(b, b_n - a_n))
	{
		while (!b_sorted_n(b, b_n - a_n))
		{
			if (b->top->content < b->top->next->content)
			{
				sb(b);
				steps++;
			}
			if (!b_sorted_n(b, b_n - a_n))
			{
				pa(a, b);
				steps++;
				a_n++;
			}
		}
		while (a_n - i > 0)
		{
			steps++;
			pb(a, b);
			if (b->top->content < b->top->next->content)
			{
				sb(b);
				steps++;
			}
			a_n--;
		}
		i++;
	}
	i--;
	while (a_n < b_n)
	{
		a_n++;
		steps++;
		pa(a, b);
	}
	return (steps);
}

int	sort3elemwithparam(t_stack *a, int n)
{
	int		sec;
	int		t;
	int		steps;

	steps = 0;
	if (n == 1 || n == 0)
		return (0);
	if (n == 2 && !a_sorted_n(a, 2))
	{
		sa(a);
		return (1);
	}
	else if (n == 2)
		return (0);
	sec = (a)->top->next->content;
	t = (a)->top->next->next->content;
	if (sec < (a)->top->content && (a)->top->content < t)
	{
		sa(a);
		return (1);
	}
	else if ((a)->top->content < sec && sec > t && t > (a)->top->content)
	{
		ra(a);
		sa(a);
		rra(a);
		return (4);
	}
	else if ((a)->top->content < sec && (a)->top->content > t)
	{
		ra(a);
		sa(a);
		rra(a);
		sa(a);
		return (3);
	}
	else if ((a)->top->content > sec && sec > t)
	{
		sa(a);
		ra(a);
		sa(a);
		rra(a);
		sa(a);
		return (5);
	}
	else if ((a)->top->content > sec && (a)->top->content > sec && sec < t)
	{
		sa(a);
		ra(a);
		sa(a);
		rra(a);
		return (4);
	}
	else
		return (0);
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
