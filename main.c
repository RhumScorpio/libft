/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 15:58:52 by marvin            #+#    #+#             */
/*   Updated: 2022/08/30 22:09:46 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <errno.h>
#include "get_next_line.h"

int	main(int ac, char **av)
{
	int		gnl;
	int		fd;
	char	*line;

	printf("oki");
	gnl = 0;
	line = NULL;
	if (ac == 2)
	{
		printf("opening %s\n", av[1]);

		fd = open(line, O_RDONLY);
		printf("cash %d ", errno);
	}
	printf("oki");
	if (fd <= 0)
	{
		printf("Error in open\n");
		return (0);
	}
	printf("oki");
	while (gnl = get_next_line(fd, &line) > 0)
	{
		printf("%s\n", line);
		free(line);
	}
	free(line);
	close(fd);
	return (0);
}
