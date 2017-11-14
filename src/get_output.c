/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_output.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <anazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 18:17:34 by anazar            #+#    #+#             */
/*   Updated: 2017/11/14 15:07:28 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <server.h>

char	*get_output_cont(char *inst)
{
	char	*out;

	if (((ft_find(inst, "TURN") != -1) || (ft_find(inst, "SET") != -1)) &&
		((ft_find(inst, "LIGHTS") != -1) || (ft_find(inst, "BRIGHTNESS") != -1))
		&& ((ft_find(inst, "ON") != -1) || (ft_find(inst, "UP") != -1)))
		out = lights_on(inst);
	else if (((ft_find(inst, "TURN") != -1) || (ft_find(inst, "SET") != -1)) &&
		((ft_find(inst, "LIGHTS") != -1) || (ft_find(inst, "BRIGHTNESS") != -1))
		&& ((ft_find(inst, "OFF") != -1) || (ft_find(inst, "DOWN") != -1)))
		out = lights_off(inst);
	else if ((ft_find(inst, "INCREASE") != -1) &&
		((ft_find(inst, "LIGHTS") != -1) || (ft_find(inst, "BRIGHTNESS") != -1)))
		out = lights_on(inst);
	else if ((ft_find(inst, "DECREASE") != -1) &&
		((ft_find(inst, "LIGHTS") != -1) || (ft_find(inst, "BRIGHTNESS") != -1)))
		out = lights_off(inst);
	else if (ft_find(inst, "CONNECTED") != -1)
		out = whose_connected(inst);
	else if (ft_find(inst, "MUSIC") != -1)
		out = play_music(inst);
	else if (ft_find(inst, "HISTORY") != -1)
		out = check_history();
	else if ((ft_find(inst, "SEARCH") != -1) && (ft_find(inst, "WEB") != -1))
		out = search_web();
	else
		out = quip();
	return (out);
}

char	*get_output(char *inst)
{
	char	*out;

	if ((ft_find(inst, "TIMER") != -1) && (ft_find(inst, "SET") != -1))
		out = set_alarm();
	else if (ft_find(inst, "TIME") != -1)
		out = get_curr_time();
	else if (ft_find(inst, "WHO ARE YOU") != -1)
		out = strdup("My name is Goodboye\n");
	else if (ft_find(inst, "DATE") != -1)
		out = get_curr_date();
	else if (ft_find(inst, "SING") != -1)
		out = sing_for_me();
	else if (ft_find(inst, "SOUL") != -1)
		out = steal_soul();
	else if ((ft_find(inst, "JOKE") != -1) && (ft_find(inst, "TELL") != -1))
		out = tell_joke();
	else if ((ft_find(inst, "ALARM") != -1) && (ft_find(inst, "SET") != -1))
		out = set_alarm();
	else if ((ft_find(inst, "SEND") != -1) && (ft_find(inst, "EMAIL") != -1))
		out = send_email();
	else if ((ft_find(inst, "CHECK") != -1) && (ft_find(inst, "WEATHER") != -1))
		out = check_weather(inst);
	else if ((ft_find(inst, "CHECK") != -1) && (ft_find(inst, "EVENTS") != -1))
		out = check_events(inst);
	else if ((ft_find(inst, "CHECK") != -1) && (ft_find(inst, "TRAFFIC") != -1))
		out = check_traffic(inst);
	else
		out = get_output_cont(inst);
	return (out);
}
