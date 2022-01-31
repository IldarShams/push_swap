/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:03:20 by smaegan           #+#    #+#             */
/*   Updated: 2022/01/31 20:08:02 by smaegan          ###   ########.fr       */
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
int		sa(t_stack *a);
int		sb(t_stack *a);
int		sa2(t_stack *a);
int		sb2(t_stack *a);
int		ss(t_stack *a, t_stack *b);
int		pa(t_stack *a, t_stack *b);
int		pb(t_stack *a, t_stack *b);
int		ra(t_stack *a);
int		rb(t_stack *b);
int		rr(t_stack *a, t_stack *b);
int		rra(t_stack *a);
int		rrb(t_stack *b);
int		rrr(t_stack *a, t_stack *b);
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
int		pure_quick_sort(t_stack *a, t_stack *b);
int		pure_quick_sort_b(t_stack *a, t_stack *b, int n, int rra_flag);
int		pure_quick_sort_a(t_stack *a, t_stack *b, int n, int rra_flag);
int		modified_quick_sort(t_stack *a, t_stack *b);
int		modified_quick_sort_b(t_stack *a, t_stack *b, int n, int rra_flag);
int		modified_quick_sort_a(t_stack *a, t_stack *b, int n, int rra_flag);
int		find_min_n(t_stack *s, int n);
int		small_stack_sort_a(t_stack *a, t_stack *b, int n);
int		small_stack_sort_b(t_stack *a, t_stack *b, int n);
int		find_pivot_n(t_stack *s, int n);
void	put_index(t_stack *s);
int		direct_find_index_n(t_stack *s, int index, int n);
int		lil_check_a(t_stack *a, int pivot, int n);
int		lil_check_b(t_stack *b, int pivot, int n);


int		cocktail_sort_a2(t_stack *a, t_stack *b, int a_n);
int		cocktail_sort_b2(t_stack *a, t_stack *b, int b_n);
int		sort3elemwithparam(t_stack *a, int n);
int		sort4elemwithparam(t_stack *a, t_stack *b, int n);

#endif
