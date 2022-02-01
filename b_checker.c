/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_checker.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:24:51 by smaegan           #+#    #+#             */
/*   Updated: 2022/02/01 20:47:15 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int	do_command(t_stack *a, t_stack *b, char *com)
{
	if (ft_strncmp("sa\n", com, 3) == 0)
		swap(a);
	else if (ft_strncmp("sb\n", com, 3) == 0)
		swap(b);
	else if (ft_strncmp("ss\n", com, 3) == 0)
		swap_swap(a, b);
	else if (ft_strncmp("pa\n", com, 3) == 0)
		push_a(a, b);
	else if (ft_strncmp("pb\n", com, 3) == 0)
		push_a(b, a);
	else if (ft_strncmp("ra\n", com, 3) == 0)
		rotate(a);
	else if (ft_strncmp("rb\n", com, 3) == 0)
		rotate(b);
	else if (ft_strncmp("rr\n", com, 3) == 0)
		rr(a, b);
	else if (ft_strncmp("rra\n", com, 4) == 0)
		rra(a);
	else if (ft_strncmp("rrb\n", com, 4) == 0)
		rrb(b);
	else if (ft_strncmp("rrr\n", com, 4) == 0)
		rrr(a, b);
	else
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int		x;
	t_stack	*a;
	t_stack	*b;
	char	*command;
	int		flag;

	flag = 1;
	if (args_check(argc, argv))
	{
		command = get_next_line(0);
		if (ft_strncmp("Error\n", command, 6) == 0)
			write(1, "OK\n", 3);
		else
			write(1, "KO\n", 3);
		free(command);
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
	while (1)
	{
		command = get_next_line(0);
		if (command == NULL)
			break ;
		if (do_command(a, b, command))
		{
			flag = 0;
			free(command);
			break ;
		}
	}
	if (flag && sorted(a))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free_stack(a);
	free_stack(b);
	free(a);
	free(b);
}
