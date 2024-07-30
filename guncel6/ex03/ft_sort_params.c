/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuzun <fuzun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 09:52:36 by fuzun             #+#    #+#             */
/*   Updated: 2024/07/16 10:47:48 by fuzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	*ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar (*(str + i));
		i++;
	}
	return (str);
}

int	ft_strcmp(char *av1, char *av2)
{
	int	i;

	i = 0;
	while (*(av1 + i) != '\0' || *(av2 + i) != '\0')
	{
		if (*(av1 + i) > *(av2 + i))
		{
			return (1);
		}
		else if (*(av1 + i) < *(av2 + i))
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

void	ft_swap(char **av1, char **av2)
{
	char	*temp;

	temp = *av1;
	*av1 = *av2;
	*av2 = temp;
}

int	main(int argc, char *argv[])
{
	int	f;
	int	s;

	f = 1;
	while (f < argc - 1)
	{
		s = 1;
		while (s < argc - 1)
		{
			if (ft_strcmp (argv[s], argv[s + 1]) > 0)
				ft_swap (&argv[s], &argv[s + 1]);
			s++;
		}
		f++;
	}
	s = 1;
	while (s < argc)
	{
		ft_putstr (argv[s++]);
		write (1, "\n", 1);
	}
	return (0);
}
