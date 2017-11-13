/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stuff.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlu <mlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 18:17:34 by mlu               #+#    #+#             */
/*   Updated: 2017/11/12 16:42:33 by mlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <server.h>

char	*check_weather(char *inst)
{
	if (ft_find(inst, "LAS VEGAS") != -1)
	{
		system("open https://weather.com/weather/tenday/l/USNV0049:1:US");
		return (ft_strdup("Here is the weather in Las Vegas\n"));
	}
	else
	{
		system("open https://weather.com/weather/tenday/l/94538:4:US");
		return (ft_strdup("Here is the weather in your current area\n"));
	}
}

char	*check_events(char *inst)
{
	if (ft_find(inst, "LAS VEGAS") != -1)
	{
		system("open https://www.eventbrite.com/d/nv--las-vegas/events/");
		return (ft_strdup("Here are some events in Las Vegas\n"));
	}
	else
	{
		system("open https://www.eventbrite.com/d/ca--fremont/events/");
		return (ft_strdup("Here are some events in your current area\n"));
	}
}

char	*check_traffic(char *inst)
{
	if (ft_find(inst, "LAS VEGAS") != -1)
	{
		system("open http://www.ktnv.com/traffic");
		return (ft_strdup("Here is the traffic in Las Vegas\n"));
	}
	else
	{
		system("sh ./script/traffic.script");
		return (ft_strdup("Here is the traffic in your current area\n"));
	}
}