/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <anazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 18:24:53 by anazar            #+#    #+#             */
/*   Updated: 2017/11/11 14:54:57 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_H
# define SERVER_H

# include <libft.h>
# include <time.h>

char	*get_curr_time(void);
char	*get_curr_date(void);
char	*get_output(char *inst);
char	*tell_joke(void);
char	*steal_soul(void);
char	*sing_for_me(void);
char	*lights_on(char *inst);
char	*lights_off(char *inst);

#endif
