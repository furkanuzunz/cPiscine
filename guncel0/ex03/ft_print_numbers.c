/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuzun <fuzun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 22:52:11 by fuzun             #+#    #+#             */
/*   Updated: 2024/07/04 00:20:59 by fuzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	a;

	a = '0';
	while (a <= '9')
	{
		write(1, &a, 1);
		a++;
	}
}