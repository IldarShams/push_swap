/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:54:53 by smaegan           #+#    #+#             */
/*   Updated: 2022/02/03 18:06:11 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted(t_stack *s)
{
	t_node	*temp;

	if (count(s) == 0 || count(s) == 1)
		return (1);
	temp = s->top;
	while (temp->next != NULL && temp->content < temp->next->content)
		temp = temp->next;
	if (temp->next == NULL)
		return (1);
	else
		return (0);
}

int	count(t_stack *s)
{
	int		x;
	t_node	*temp;

	if (s->top == NULL)
		return (0);
	x = 0;
	temp = s->top;
	while (temp != NULL)
	{
		x++;
		temp = temp->next;
	}
	return (x);
}

void	pa_n(t_stack *a, t_stack *b, int n)
{
	while (n-- > 0)
		pa(a, b);
}

void	pb_n(t_stack *a, t_stack *b, int n)
{
	while (n-- > 0)
		pb(a, b);
}

int	ft_isnum(char *argv)
{
	int	i;

	i = 0;
	if (argv[i] == '-')
	{
		i++;
		if (argv[i] == '\0')
			return (0);
	}
	while (ft_isdigit(argv[i]))
		i++;
	if (argv[i] == '\0')
		return (1);
	else
		return (0);
}
