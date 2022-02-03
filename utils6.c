/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils6.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:32:13 by smaegan           #+#    #+#             */
/*   Updated: 2022/02/03 20:02:49 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	arg_check(char *argv)
{
	if (!ft_isnum(argv))
		return (1);
	if (ft_strlen(argv) > 10 && argv[0] != '-')
		return (1);
	if (ft_strlen(argv) == 10
		&& ft_strncmp(argv, "2147483647", 10) > 0)
		return (1);
	if (ft_strlen(argv) == 11
		&& ft_strncmp(argv, "-2147483648", 11) > 0)
		return (1);
	return (0);
}

int	dup_zero_check(int argc, char **argv)
{
	int	m_zero;
	int	zero;
	int	i;

	i = 1;
	m_zero = 0;
	zero = 0;
	while (i < argc)
	{
		if (ft_strncmp(argv[i], "0", 1) == 0 && ft_strlen(argv[i]) == 1)
			zero = 1;
		if (ft_strncmp(argv[i], "-0", 2) == 0 && ft_strlen(argv[i]) == 2)
			m_zero = 1;
		i++;
	}
	if (zero == 1 && m_zero == 1)
		return (1);
	return (0);
}

int	args_check(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		if (arg_check(argv[i]))
			return (1);
		i++;
	}
	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strncmp(argv[i], argv[j], 11) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (dup_zero_check(argc, argv));
}

int	lil_check_b(t_stack *b, int pivot, int n)
{
	t_node	*temp;

	if (count(b) < n)
		n = count(b);
	if (n == 0 || n == 1)
		return (0);
	temp = b->top;
	while (n-- > 0)
	{
		if (temp->content >= pivot)
			return (1);
		temp = temp->next;
	}
	return (0);
}

int	lil_check_a(t_stack *a, int pivot, int n)
{
	t_node	*temp;

	if (count(a) < n)
		n = count(a);
	if (n == 0 || n == 1)
		return (0);
	temp = a->top;
	while (n-- > 0)
	{
		if (temp->content <= pivot)
			return (1);
		temp = temp->next;
	}
	return (0);
}
