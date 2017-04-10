/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vertex3_div.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/06 05:26:57 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

/*
**	->	Divide two t_vertex3 : v1 / v2
**		modify the v1 value
*/

t_vertex3	*ft_vertex3_div(t_vertex3 *v1, t_vertex3 *v2)
{
	v1->x /= v2->x;
	v1->y /= v2->y;
	v1->z /= v2->z;
	return (v1);
}