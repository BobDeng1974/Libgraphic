/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_norm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 16:14:22 by upopee            #+#    #+#             */
/*   Updated: 2017/04/15 19:06:16 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "libgraphic.h"

float	ft_quat_norm(t_quater *q)
{
	return (sqrtf(q->x * q->x + q->y * q->y + q->z * q->z + q->w * q->w));
}
