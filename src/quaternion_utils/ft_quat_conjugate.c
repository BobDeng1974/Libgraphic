/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_conjugate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 16:56:00 by upopee            #+#    #+#             */
/*   Updated: 2017/04/15 17:21:42 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_quater	ft_quat_conjugate(t_quater *q)
{
	t_quater	dst;

	dst.w = q->w;
	dst.x = -(q->x);
	dst.y = -(q->y);
	dst.z = -(q->z);
	return (dst);
}
