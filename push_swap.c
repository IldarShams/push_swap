/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:48:40 by smaegan           #+#    #+#             */
/*   Updated: 2022/01/31 20:45:01 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		x;
	t_stack	*a;
	t_stack	*b;
	//t_stack	*a2;
//	t_stack	*b2;

	g = 0;
	a = init_stack();
	b = init_stack();
//	a2 = init_stack();
//	b2 = init_stack();
	x = argc - 1;
	while (x > 0)
	{
		push(a, ft_atoi(argv[x]));
//		push(a2, ft_atoi(argv[x]));
		x--;
	}
	put_index(a);
//	put_index(a2);
	modified_quick_sort(a, b);
//	int steps2 = cocktail_sort_a2(a2, b2, 4);
	//show(1, a);
	//printf("	%d", steps);//, steps2);
	free_stack(a);
	free_stack(b);
	free(a);
	free(b);
}
