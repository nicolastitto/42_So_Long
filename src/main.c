/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:57:57 by nide-mel          #+#    #+#             */
/*   Updated: 2021/09/15 17:26:26 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putstr_fd("ARGUMENTS ERROR 😐", 1);
		return (-1);
	}
	if(!av[1])
		return (0);
	return (0);
}
