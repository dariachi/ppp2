/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchirkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 11:57:02 by dchirkin          #+#    #+#             */
/*   Updated: 2016/12/10 13:55:44 by dchirkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int ret;

	if (!s1 || !s2)
		return (0);
	ret = ft_strcmp(s1, s2);
	if (ret == 0)
		return (1);
	return (0);
}
