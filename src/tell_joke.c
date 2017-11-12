/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tell_joke.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <anazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 14:22:49 by anazar            #+#    #+#             */
/*   Updated: 2017/11/11 14:57:09 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <server.h>
#include <fcntl.h>
#include <time.h>

char	*tell_joke(void)
{
	int		fd;
	int		i;
	char	*str;
	int		val;

	i = 0;
	srand(time(0));
	val = rand() % 3000;
	fd = open("./database/shortjokes.csv", O_RDONLY);
	while (i < val)
	{
		get_next_line(fd, &str);
		++i;
		ft_strdel(&str);
	}
	get_next_line(fd, &str);
	str = ft_strjoinfree(str, ft_strdup("\n"));
	return (str);
}
