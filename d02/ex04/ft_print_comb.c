/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchatela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 15:53:47 by bchatela          #+#    #+#             */
/*   Updated: 2016/08/06 16:34:28 by bchatela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	char x;
	char y;
	char z;
	x = 0;
	y = 0;
	z = 0;

	while (z <= 9)
	{
		z++;
		ft_putchar('z');
		while ( z >=9 )
		{	
			y++;
			ft_putchar('y');
			while ( y >=9 )
			{
				x++;
				ft_putchar('x');
			}
		}
	}
}
