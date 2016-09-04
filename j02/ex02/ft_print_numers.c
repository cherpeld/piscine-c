/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cherpeld <cherpeld@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 14:28:59 by cherpeld          #+#    #+#             */
/*   Updated: 2016/09/02 10:25:43 by cherpeld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char cat;

	cat = '0';
	while (cat <= '9')
	{
		ft_putchar(cat);
		cat = cat + 1;
	}
}
