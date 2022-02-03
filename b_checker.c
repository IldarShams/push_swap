/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_checker.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:24:51 by smaegan           #+#    #+#             */
/*   Updated: 2022/02/03 20:07:37 by smaegan          ###   ########.fr       */
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
		rotate_rotate(a, b);
	else if (ft_strncmp("rra\n", com, 4) == 0)
		rrotate(a);
	else if (ft_strncmp("rrb\n", com, 4) == 0)
		rrotate(b);
	else if (ft_strncmp("rrr\n", com, 4) == 0)
		rrotate_rotate(a, b);
	else
		return (write(2, "Error\n", 6));
	return (0);
}

int	check_error(int argc, char **argv)
{
	if (args_check(argc, argv))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}

int	sorting(t_stack *a, t_stack *b)
{
	char	*command;
	int		x;

	x = 0;
	while (1)
	{
		command = get_next_line(0);
		if (command == NULL)
			break ;
		x++;
		if (do_command(a, b, command))
		{
			free(command);
			return (-1);
		}
	}
	return (x);
}

int	main(int argc, char **argv)
{
	int		x;
	t_stack	*a;
	t_stack	*b;
	int		flag;

	if (argc == 1 || check_error(argc, argv))
		return (0);
	a = init_stack();
	b = init_stack();
	x = argc - 1;
	while (x > 0)
		push(a, ft_atoi(argv[x--]));
	flag = sorting(a, b);
	if (flag >= 0 && sorted(a) && count(b) == 0)
		write(1, "OK\n", 3);
	else if (flag != -1)
		write(1, "KO\n", 3);
	free_stack(a);
	free_stack(b);
	free(a);
	free(b);
}
