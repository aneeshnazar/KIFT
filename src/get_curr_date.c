/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_curr_date.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <anazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 19:01:44 by anazar            #+#    #+#             */
/*   Updated: 2017/11/10 19:17:50 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <server.h>

char	*get_curr_date(void)
{
	time_t		rawtime;
	struct tm	*time_info;
	char		buf[80];

	time(&rawtime);
	time_info = localtime(&rawtime);
	strftime(buf, 80, "%D\n", time_info);
	return (ft_strjoin("The date is ", buf));
}
