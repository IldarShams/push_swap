/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:02:42 by smaegan           #+#    #+#             */
/*   Updated: 2022/01/20 17:58:48 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(void)
{
	t_node	*f;
	t_node	*sec;

	if (a.top == NULL)
		return ;
	if (a.top->next == NULL)
		return ;
	f = a.top;
	sec = f->next;
	f->next = sec->next;
	sec->next = f;
	a.top = sec;
}

void	sb(void)
{
	t_node	*f;
	t_node	*sec;

	if (b.top == NULL)
		return ;
	if (b.top->next == NULL)
		return ;
	f = b.top;
	sec = f->next;
	f->next = sec->next;
	sec->next = f;
	b.top = sec;
}

void	ss(void)
{
	sa();
	sb();
}

void	pa(void)
{
	t_node	*temp;

	if (b.top == NULL)
		return ;
	temp = b.top;
	b.top = b.top->next;
	temp->next = a.top;
	a.top = temp;
}

void	pb(void)
{
	t_node	*temp;

	if (a.top == NULL)
		return ;
	temp = a.top;
	a.top = a.top->next;
	temp->next = b.top;
	b.top = temp;
}
