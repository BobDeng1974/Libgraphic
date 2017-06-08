/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_ver2i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 01:31:21 by upopee            #+#    #+#             */
/*   Updated: 2017/06/04 23:04:16 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_vertex2i	ft_to_ver2i(int x, int y)
{
	t_vertex2i	dst;

	dst.x = x;
	dst.y = y;
	dst.color = ft_rgba_default();
	return (dst);
}
