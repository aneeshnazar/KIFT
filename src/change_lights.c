/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_lights.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlu <mlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 18:17:34 by mlu               #+#    #+#             */
/*   Updated: 2017/11/12 16:42:33 by mlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <server.h>

char	*lights_on(char *inst)
{
	if (ft_find(inst, "INCREASE") != -1)
	{
		system("sh ./script/brighten.script");
		if (ft_find(inst, "LIGHTS") != -1)
			return (ft_strdup("Increasing the lights\n"));
		else
			return (ft_strdup("Increasing the brightness\n"));
	}
	else if (ft_find(inst, "ON") != -1)
	{
		system("sh ./script/maxlights.script");
		if (ft_find(inst, "LIGHTS") != -1)
			return (ft_strdup("Turning lights on\n"));
		else
			return (ft_strdup("Turning brightness on\n"));
	}
	else
	{
		system("sh ./script/brighten.script");
		if (ft_find(inst, "LIGHTS") != -1)
			return (ft_strdup("Turning lights up\n"));
		else
			return (ft_strdup("Turning brightness up\n"));
	}
}

char	*lights_off(char *inst)
{
	if (ft_find(inst, "DECREASE") != -1)
	{
		system("sh ./script/dim.script");
		if (ft_find(inst, "LIGHTS") != -1)
			return (ft_strdup("Decreasing the lights\n"));
		else
			return (ft_strdup("Decreasing the brightness\n"));
	}
	else if (ft_find(inst, "OFF") != -1)
	{
		system("sh ./script/nolights.script");
		if (ft_find(inst, "LIGHTS") != -1)
			return (ft_strdup("Turning lights off\n"));
		else
			return (ft_strdup("Turning brightness off\n"));
	}
	else
	{
		system("sh ./script/dim.script");
		if (ft_find(inst, "LIGHTS") != -1)
			return (ft_strdup("Turning lights down\n"));
		else
			return (ft_strdup("Turning brightness down\n"));
	}
}