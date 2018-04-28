/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:49:21 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/05 19:08:52 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

void	ft_strclr(char *s)
{
	if (!s)
		return ;
	ft_memset(s, 0, (size_t)ft_strlen(s));
}