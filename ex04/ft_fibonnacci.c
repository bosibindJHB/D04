
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonnacci.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damangue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 09:13:55 by damangue          #+#    #+#             */
/*   Updated: 2020/07/15 09:20:53 by damangue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
int ft_fibonacci(int index)
{
	if(index==0)
	{
	
		return 0;
	}

	else if(index==1)
	{
		return 1;
	}
	else{
	
		return ft_fibonacci(index-1)+ ft_fibonacci(index-2);
	
}

}	

