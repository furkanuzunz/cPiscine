/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuzun096 <fuzun@student.42kocaeli.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 20:36:53 by fuzun096          #+#    #+#             */
/*   Updated: 2024/07/22 11:55:39 by fuzun096         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*conseq;
	int	i;

	i = 0;
	len = max - min;
	conseq = (int *)malloc((len) * sizeof(int));
	if (min >= max)
		return (NULL);
	if (conseq == NULL)
		return (NULL);
	while (i < len)
	{
		conseq[i] = min + i;
		i++;
	}
	return (conseq);
}
