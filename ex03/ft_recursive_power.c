/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damangue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 13:05:25 by damangue          #+#    #+#             */
/*   Updated: 2020/07/13 13:24:45 by damangue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

int ft_recursive_power(int nb, int power)
{
	if (power==1)
		 return nb;
	return (nb*ft_recursive_power(nb,power-1));

}



