/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_sl.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:27:25 by nide-mel          #+#    #+#             */
/*   Updated: 2021/09/27 16:51:30 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_SL_H
# define FUNCTIONS_SL_H

# include "so_long.h"
# include "struct_sl.h"


int		check_map(char *file_name, t_map **map, char **temp);
void	init_map(t_map **map);
void	init_info(t_info *s_i);
char	**start_map(int fd, t_map **map);
void	exit_program(t_info *s_i, char **temp);
void	organize_map(t_map **map, char **temp);
void	exit_error(void);
void	free_matrix(t_map **map, char **temp);
void	free_map(t_map **map, int **temp);
void	init_wall(t_wall *s_w, int h, int w);
void	populate_wall_corner(t_map **map, char **temp);
void	populate_center_map(t_map **map, char **temp, t_wall *s_w);
void	put_img(t_info *s_i, t_img *img, int x, int y);
void	init_images(t_info *s_i);
void	render_img(t_info *s_i);
void	game_moves(int key, t_info *s_i);

#endif
