/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 16:47:39 by clesaffr          #+#    #+#             */
/*   Updated: 2022/08/30 22:25:35 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "get_next_line.h"

#define BUFFER_SIZE 100

static int	line_copy(char **line, t_all *a)
{
	int	i;

	i = 0;
	while (a->str[i] && a->str[i] != '\n')
		i++;
	*line = ft_strndup(a->str, i);
	return (i + 1);
}

static int	ft_intstrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

static int	gnl_read(int fd, t_all *all, char **line)
{
	int		backlashed;
	int		end;
	int		foo;
	char	*tmp;
	char	buff[BUFFER_SIZE + 1];

	backlashed = 0;
	end = 1;
	while (end > 0)
	{
		printf("end = %d\n", end);
		end = read(fd, buff, BUFFER_SIZE);
		buff[end] = '\0';
		tmp = all->str;
		all->str = ft_gnlstrjoin(all->str, buff);
		free(tmp);
		backlashed = ft_intstrchr(all->str, '\n');
		if (backlashed >= 0)
			break ;
	}
	foo = line_copy(line, a);
	if (backlashed == -1)
		return (0);
	else
		return (foo);
}

int	get_next_line(int fd, char **line)
{
	static t_all	all;
	int				end;
	char			*tmp;
	char			test[BUFFER_SIZE + 1];

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, test, 0) == -1)
		return (-1);
	end = gnl_read(fd, &all, line);
	tmp = all.str;
	if (tmp[end] != '\0')
	{
		all.str = ft_strdup(all.str + end);
		free(tmp);
	}
	else
	{
		all.str = NULL;
		free(tmp);
	}
	if (end == 0)
		return (0);
	return (1);
}
