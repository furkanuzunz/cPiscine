/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuzun096 <fuzun@student.42kocaeli.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:34:48 by fuzun096          #+#    #+#             */
/*   Updated: 2024/07/22 12:11:33 by fuzun096         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_catting(char *dest, char *src)
{
	int	destlen;
	int	i;

	destlen = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total;
	int		i;
	char	*str;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen (strs[i]);
		if (i < size - 1)
			total += ft_strlen (sep);
		i++;
	}
	str = (char *)malloc(total + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_catting(str, strs[i]);
		if (i < size - 1)
			ft_catting(str, sep);
		i++;
	}
	return (str);
}
