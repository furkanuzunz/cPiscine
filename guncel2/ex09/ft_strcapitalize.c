/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuzun <fuzun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:21:16 by fuzun             #+#    #+#             */
/*   Updated: 2024/07/13 16:58:30 by fuzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 90 && str[i] >= 65)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	chg_ind;

	i = 0;
	chg_ind = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (chg_ind == 0)
			{
				str[i] = str[i] - ('a' - 'A');
				chg_ind = 1;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			chg_ind = 1;
		else
			chg_ind = 0;
		i++;
	}
	return (str);
}
