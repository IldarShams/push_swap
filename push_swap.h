/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:03:20 by smaegan           #+#    #+#             */
/*   Updated: 2022/01/26 19:35:43 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H
# include <stdio.h>
# include "libft.h"

typedef struct s_node
{
	int				index;
	int				content;
	struct s_node	*next;
}	t_node;

struct s_stack
{
	t_node	*top;
};

typedef struct s_stack	t_stack;

int		g;
void	sa(t_stack *a);
void	sb(t_stack *a);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);
t_stack	*init_stack(void);
void	free_stack(t_stack *s);
void	push(t_stack *s, int elem);
int		swap_stack(t_stack *s);
int		show(int d, t_stack *s);
int		direct_find_elem(t_stack *s, int elem);
int		reverse_find_elem(t_stack *s, int elem);
int		count(t_stack *s);
int		sorted(t_stack *s);
int		a_sorted_n(t_stack *s, int n);
int		b_sorted_n(t_stack *s, int n);
int		quick_sort(t_stack *a, t_stack *b);
int		quick_sort_b(t_stack *a, t_stack *b, int n);
int		quick_sort_a(t_stack *a, t_stack *b, int n);
int		find_min_n(t_stack *s, int n);
int		small_stack_sort_a(t_stack *a, t_stack *b, int n);
int		find_pivot_n(t_stack *s, int n);
void	put_index(t_stack *s);

#endif
