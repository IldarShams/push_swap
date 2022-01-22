/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:03:20 by smaegan           #+#    #+#             */
/*   Updated: 2022/01/21 16:15:02 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H
# include "libft.h"

typedef struct s_node
{
	int				content;
	struct s_node	*next;
}	t_node;

struct s_stack
{
	t_node	*top;
} a, b;

typedef struct s_stack	t_stack;

void	sa(void);
void	sb(void);
void	ss(void);
void	pa(void);
void	pb(void);
void	ra(void);
void	rb(void);
void	rr(void);
void	rra(void);
void	rrb(void);
void	rrr(void);
t_stack	*init_stack(void);
void	free_stack(t_stack *s);
void	push(t_stack *s, int elem);
int		swap_stack(t_stack *s);
int		show(int d, t_stack *s);
int		direct_find_elem(t_stack *s, int elem);
int		reverse_find_elem(t_stack *s, int elem);
int		count(t_stack *s);
int		sorted(t_stack *s);

#endif
