/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ondaydin <ondaydin@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 03:33:59 by ondaydin          #+#    #+#             */
/*   Updated: 2022/10/19 03:34:16 by ondaydin         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main()
{
	int a;
	int b;
	int x;
	int y;

	a = 10;
	b = 5;
	ft_div_mod(a, b, &x, &y);
	printf("%d\n", x);
	printf("%d", y);
}*/