/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah <bu_snaad93@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:26:28 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/03/13 15:28:22 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	char	next_char;

	while (true)
	{
		next_char = *str;
		if (next_char == '\0')
		{
			break ;
		}
		ft_putchar(next_char);
		str++;
	}
}
