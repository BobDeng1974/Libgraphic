/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec2_dotprod.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/25 00:40:32 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

/*
**	->	Scalar product of two t_vector2
**		return the float result of v1 . v2
*/

float	ft_vec2_dotprod(t_vector2 v1, t_vector2 v2)
{
	return ((v1.x * v2.x) + (v1.y * v2.y));
}
