/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ondaydin <ondaydin@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 03:37:16 by ondaydin          #+#    #+#             */
/*   Updated: 2022/10/19 03:38:12 by ondaydin         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

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
/*
int	main()
{
	char *c = "Hello";
	printf("%d", ft_strlen(c));
}*/
