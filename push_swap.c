/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:48:40 by smaegan           #+#    #+#             */
/*   Updated: 2022/02/01 20:14:44 by smaegan          ###   ########.fr       */
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

	if (args_check(argc, argv))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	a = init_stack();
	b = init_stack();
	x = argc - 1;
	while (x > 0)
	{
		push(a, ft_atoi(argv[x]));
		x--;
	}
	put_index(a);
	modified_quick_sort(a, b);
	free_stack(a);
	free_stack(b);
	free(a);
	free(b);
}
