/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchatela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 15:14:11 by bchatela          #+#    #+#             */
/*   Updated: 2016/08/06 15:33:37 by bchatela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char number);

void	ft_print_numbers(void)
{
	number = 0;
	while (number <= 9)
	{
		ft_putchar(number);
		number++;
	}
}
