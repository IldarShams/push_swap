/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:48:40 by smaegan           #+#    #+#             */
/*   Updated: 2022/01/22 19:37:34 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		x;
	t_stack	*a;
	t_stack	*b;

	a = init_stack();
	b = init_stack();
	x = argc - 1;
	while (x > 0)
	{
		push(a, ft_atoi(argv[x]));
		x--;
	}
	printf("not sorted a:\n");
	show(1, a);
	printf("----------\n\n");
	printf("	%d\n", quick_sort(a, b));
	printf("a:\n");
	show(1, a);
	printf("----------\n\n");
	printf("b:\n");
	show(1, b);
	printf("----------\n\n");
	// printf("|||||||||||||||||||||||\n\n");
	// printf("	%d\n", quick_sort_b(a, b, 8));
	// printf("a:\n");
	// show(1, a);
	// printf("----------\n\n");
	// printf("b:\n");
	// show(1, b);
	// printf("----------\n\n");
	// printf("	count:%d\n", count(&a));
	// printf("	%d\n", find_min(&a));
	// printf("	%d\n", direct_find_elem(&a, 1));
	// printf("	%d\n", direct_find_elem(&a, -1));
	// printf("	%d\n", direct_find_elem(&a, -2));
	// printf("\n");
	// printf("	%d\n", reverse_find_elem(&a, 1));
	// printf("	%d\n", reverse_find_elem(&a, 100));
	// printf("	%d\n", reverse_find_elem(&a, 20));
	// printf("		steps:%d\n", selection_sort());
	// printf("sorted a:\n");
	// show(1, &a);
	// printf("----------\n\n");
	free_stack(a);
	free_stack(b);
	free(a);
	free(b);
}
