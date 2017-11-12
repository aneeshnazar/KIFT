/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_curr_time.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <anazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 18:20:31 by anazar            #+#    #+#             */
/*   Updated: 2017/11/10 19:17:46 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <server.h>

char	*get_curr_time(void)
{
	time_t		rawtime;
	struct tm	*time_info;
	char		buf[80];

	time(&rawtime);
	time_info = localtime(&rawtime);
	strftime(buf, 80, "%r\n", time_info);
	return (ft_strjoin("The time is ", buf));
}
