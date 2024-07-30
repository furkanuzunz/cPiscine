/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuzun <fuzun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:18:56 by fuzun             #+#    #+#             */
/*   Updated: 2024/07/15 19:23:13 by fuzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	negative;

	result = 0;
	negative = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str != '\0' && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
		{
			negative *= -1;
		}
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		result = (result * 10) + *str++;
		result = result - 48;
	}
	result *= negative;
	return (result);
}
