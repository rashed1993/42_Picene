/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fghazal <fahmighazal@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:36:20 by fghazal           #+#    #+#             */
/*   Updated: 2022/03/29 19:01:39 by fghazal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	index;
	int	*buffer;

	if (min >= max)
		return (0);
	range = max - min - 1;
	buffer = malloc(range * sizeof(int));
	if (buffer == NULL)
		return (0);
	index = 0;
	while (index <= range)
	{
		buffer[index] = min + index;
		index++;
	}
	return (buffer);
}

/*void	debug_dump_array(int numbers[], int size)
{
	int index;

	printf("[ ");
	index = 0;
	while (index < size)
	{
		printf("%d", numbers[index]);
		if (index != size - 1)
		{
			printf(", ");
		}
		index++;
	}
	printf(" ]");
}

int		main(void)
{
	int	min;
	int	max;

	min = 5;
	max = 10;
	printf("min = %d, max = %d -> ", min, max);
	debug_dump_array(ft_range(min, max), max - min);
}*/
