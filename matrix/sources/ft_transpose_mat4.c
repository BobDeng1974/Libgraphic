/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transpose_mat4.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 04:02:20 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:15:51 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/matrix.h"

t_matrix4	ft_transpose_mat4(t_matrix4 m)
{
	t_matrix4	dst;
	int			i;
	int			j;

	i = 4;
	while (i--)
	{
		j = 4;
		while (j--)
			dst.array[i][j] = m.array[j][i];
	}
	return (dst);
}
