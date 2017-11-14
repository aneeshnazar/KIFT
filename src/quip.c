/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quip.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <anazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:05:53 by anazar            #+#    #+#             */
/*   Updated: 2017/11/14 15:07:20 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <server.h>
#include <fcntl.h>
#include <time.h>

char	*quip(void)
{
	int		fd;
	int		i;
	char	*str;
	int		val;

	i = 0;
	srand(time(0));
	val = rand() % 100;
	fd = open("./database/response.csv", O_RDONLY);
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
