/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:57:57 by nide-mel          #+#    #+#             */
/*   Updated: 2021/09/19 23:34:53 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/*Start the game and validate everything, create and init struct*/
void	start_program(char *map)
{
	t_info		s_i;

	init_map(&s_i.map);
	if (check_map(map, &s_i.map) == FALSE)
		exit_program(&s_i);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putstr_fd("ARGUMENTS ERROR 😐\n", 1);
		return (-1);
	}
	start_program(av[1]);
	return (0);
}
