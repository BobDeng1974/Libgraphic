/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ver3f_opp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:24:18 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/vertex.h"

/*
**	->	Opposite t_vertex3f value : v = -v
*/

t_vertex3f	ft_ver3f_opp(t_vertex3f v)
{
	t_vertex3f	dst;

	dst.x = -(v.x);
	dst.y = -(v.y);
	dst.z = -(v.z);
	return (dst);
}
