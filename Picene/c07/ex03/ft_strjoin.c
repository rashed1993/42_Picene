/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fghazal <fahmighazal@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 19:34:56 by fghazal           #+#    #+#             */
/*   Updated: 2022/03/29 19:45:56 by fghazal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	s = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			s[c++] = sep[j++];
		}
		i++;
	}
	s[c] = '\0';
	return (s);
}

/*char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*text[10];

	text[0] = "Testing";
	text[1] = "an";
	text[2] = "occupation";
	text[3] = "ft_strjoin";
	text[4] = "with";
	text[5] = "a";
	text[6] = "separator";
	text[7] = "\' - \'";
	text[8] = "and size";
	text[9] = "10";
	printf("%s\n", ft_strjoin(10, text, " - "));
}*/
