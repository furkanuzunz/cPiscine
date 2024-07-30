/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuzun096 <fuzun@student.42kocaeli.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:56:47 by fuzun096          #+#    #+#             */
/*   Updated: 2024/07/22 12:01:12 by fuzun096         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*conseq;
	int	i;
	int	len;

	i = 0;
	len = max - min;
	conseq = (int *)malloc((len) * sizeof(int));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (conseq == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = conseq;
	while (i < len)
	{
		conseq[i] = min;
		min++;
		i++;
	}
	return (i);
}
