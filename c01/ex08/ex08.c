/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ondaydin <ondaydin@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 03:47:42 by ondaydin          #+#    #+#             */
/*   Updated: 2022/10/19 03:48:00 by ondaydin         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab [i];
				tab[i] = tab [i + 1];
				tab [i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}
int	main()
{
	int tab[6] = {7, 6, 3, 4, 2, 5};
	int size = 6;

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]); 
	return (0);
}
