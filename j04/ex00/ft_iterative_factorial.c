/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cherpeld <cherpeld@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 21:47:37 by cherpeld          #+#    #+#             */
/*   Updated: 2016/09/03 23:32:47 by cherpeld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	x;

	x = 0;
	if (nb == 1)
	{
		x = 1;
		return (x);
	}
	else
	{
		x = nb * ft_iterative_factorial(nb - 1);
		return (x);
	}
}
