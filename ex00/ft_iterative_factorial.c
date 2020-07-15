/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damangue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 09:49:20 by damangue          #+#    #+#             */
/*   Updated: 2020/07/13 15:29:42 by damangue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int ft_iterative_factorial(int nb)
{
	
	int i =1;
	int fact =1;
	  
	while(i <= nb)
	{
		fact=fact*i;
		i++;
	}
	return fact;
}

int main ()
{
int result ;

result=ft_iterative_factorial(5);
printf("%d", result);

}


