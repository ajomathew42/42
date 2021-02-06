/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/15 20:24:40 by schapuis          #+#    #+#             */
/*   Updated: 2013/08/15 21:32:13 by schapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_combn(void)
{
    int    number[2];

    number[0] = '0';
    while( number[0] <= '9')
    {
        number[1] = number[0] +'1';
	while (number[1] <= '9')
	{
            ft_putchar(number[0]);
	    ft_putchar(number[1]);
	    if (!(number[0] == '8' && number[1] == '9'))
	    {
		ft_putchar(',');
		ft_putchar(' ');
	    }
	    number[1]++;
	}
    }	
}
