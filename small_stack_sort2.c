/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_stack_sort2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:20:29 by smaegan           #+#    #+#             */
/*   Updated: 2022/02/03 19:31:20 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	direct_find_elem(t_stack *s, int elem)
{
	int		x;
	int		y;
	t_node	*temp;

	if (s == NULL || count(s) <= 1)
		return (0);
	x = 0;
	y = 0;
	temp = s->top;
	while (temp != NULL && temp->content != elem)
	{
		x++;
		temp = temp->next;
	}
	while (temp != NULL)
	{
		y--;
		temp = temp->next;
	}
	if (x < -y)
		return (x);
	else
		return (y);
}

void	sort5elem(t_stack *a, t_stack *b)
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
	sort4elem(a, b);
	pa(a, b);
}

void	small_stack_sort(t_stack *a, t_stack *b, int n)
{
	if (n <= 1)
		return ;
	if (n == 2 && !sorted(a))
		sa(a);
	if (n == 3)
		sort3elem(a);
	if (n == 4)
		sort4elem(a, b);
	if (n == 5)
		sort5elem(a, b);
	return ;
}
