/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <anazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 18:24:53 by anazar            #+#    #+#             */
/*   Updated: 2017/11/14 15:07:42 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_H
# define SERVER_H

# include <libft.h>
# include <time.h>

/*
** All of these functions are found in the respective .c files in /src
*/
char	*get_curr_time(void);
char	*get_curr_date(void);
char	*get_output(char *inst);
char	*tell_joke(void);
char  *quip(void);
char	*steal_soul(void);
char	*sing_for_me(void);
char	*send_email(void);
char	*set_alarm(void);
char	*whose_connected(char *inst);
char	*play_music(char *inst);
char	*check_history(void);
char	*search_web(void);

/*
** change_lights.c
*/
char	*lights_on(char *inst);
char	*lights_off(char *inst);

/*
** check_stuff.c
*/
char	*check_weather(char *inst);
char	*check_events(char *inst);
char	*check_traffic(char *inst);

#endif
