/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 17:47:00 by amalcoci          #+#    #+#             */
/*   Updated: 2016/10/31 17:47:00 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int main()
{
	int		fd;
	char	*str;

	fd = open("main.c",O_RDONLY);
	while (get_next_line(fd, &str))
	{
		printf("%s\n",str);
		ft_strdel(&str);
	}
	close(fd);
}