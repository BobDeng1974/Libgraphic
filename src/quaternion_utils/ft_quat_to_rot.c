/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_to_rot.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 04:23:55 by upopee            #+#    #+#             */
/*   Updated: 2017/04/25 00:34:58 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "libgraphic.h"

float		ft_quat_to_rot(t_quater q, float *a_x, float *a_y, float *a_z)
{
	float		angle;
	float		norm;

	q = ft_quat_normalize(q);
	angle = acosf(q.w) * 2;
	norm = sqrtf(q.x * q.x + q.y * q.y + q.z * q.z);
	*a_x = q.x;
	*a_y = q.y;
	*a_z = q.z;
	if (norm > 0.0005)
	{
		*a_x /= norm;
		*a_y /= norm;
		*a_z /= norm;
	}
	return (angle);
}
