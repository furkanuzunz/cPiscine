/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuzun096 <fuzun@student.42kocaeli.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:04:37 by fuzun096          #+#    #+#             */
/*   Updated: 2024/07/20 11:15:52 by fuzun096         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (n * n <= nb)
	{
		if (n * n == nb)
		{
			return (n);
		}
		n++;
	}
	return (0);
}
