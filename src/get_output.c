/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_output.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <anazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 18:17:34 by anazar            #+#    #+#             */
/*   Updated: 2017/11/11 16:42:33 by anazar           ###   ########.fr       */
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
	else
		out = ft_strdup("Spank me daddy\n");
	return (out);
}

char	*get_output(char *inst)
{
	char	*out;

	if (ft_find(inst, "TIME") != -1)
		out = get_curr_time();
	else if (ft_find(inst, "WHO ARE YOU") != -1)
		out = strdup("My name is Goodboye.\n");
	else if (ft_find(inst, "DATE") != -1)
		out = get_curr_date();
	else if (ft_find(inst, "SING") != -1)
		out = sing_for_me();
	else if (ft_find(inst, "SOUL") != -1)
		out = steal_soul();
	else if (ft_find(inst, "JOKE") != -1)
		out = tell_joke();
	else
		out = get_output_cont(inst);
	return (out);
}
