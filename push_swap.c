/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:48:40 by smaegan           #+#    #+#             */
/*   Updated: 2022/01/26 20:02:45 by smaegan          ###   ########.fr       */
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
	int		fd;

	g = 0;
	fd = open("test.txt", O_RDONLY);
	a = init_stack();
	b = init_stack();
	x = argc - 1;
	while (x > 0)
	{
		push(a, ft_atoi(argv[x]));
		x--;
	}
	put_index(a);
	int a1 = small_stack_sort_a(a, b, count(a));
	printf("sorted a:\n");
	show(1, a);
	printf("----------\n\n");
	printf("	%d/%d\n", g, a1);
	free_stack(a);
	free_stack(b);
	free(a);
	free(b);
	close(fd);
}
