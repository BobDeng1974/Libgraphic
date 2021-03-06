/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec2_magn.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:22:32 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "../includes/vector.h"

/*
**	->	Magnitude t_vector2 value
**		return the lenght of v (float value)
*/

float	ft_vec2_magn(t_vector2 v)
{
	return (sqrtf(v.x * v.x + v.y * v.y));
}
