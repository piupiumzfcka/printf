/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolowstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtelega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 15:58:16 by dtelega           #+#    #+#             */
/*   Updated: 2017/02/03 16:03:21 by dtelega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

char	*ft_tolowstr(char *s)
{
	int		i;

	i = -1;
	while (s[++i])
		s[i] = ft_tolower(s[i]);
	return (s);
}
