/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   play_music.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlu <mlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 18:17:34 by mlu               #+#    #+#             */
/*   Updated: 2017/11/12 16:42:33 by mlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <server.h>

char	*play_music(char *inst)
{
	if (ft_find(inst, "PLAY") != -1)
	{
		system("afplay ./database/music.mp3 &");
		return (ft_strdup("Listen to my jam: \
			A Thousand Mile - By Vanessa Carlton\n"));
	}
	else if (ft_find(inst, "STOP") != -1)
	{
		system("killall afplay");
		return (ft_strdup("I've turned off my jam\n"));
	}
	return (ft_strdup("Do you want me to play music or stop music?\n"));
}
