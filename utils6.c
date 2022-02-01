/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils6.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaegan <smaegan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:32:13 by smaegan           #+#    #+#             */
/*   Updated: 2022/02/01 19:04:27 by smaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isnum(char *argv)
{
	int	i;

	i = 0;
	if (argv[i] == '-')
		i++;
	while (ft_isdigit(argv[i]))
		i++;
	if (argv[i] == '\0')
		return (1);
	else
		return (0);
}

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
	return (0);
}
