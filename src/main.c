/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <anazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:31:24 by anazar            #+#    #+#             */
/*   Updated: 2017/11/11 17:50:26 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include <server.h>

int	main(void)
{
	char		*msg;
	char		*out;
	char		*command;

	get_next_line(0, &msg);
	ft_putendl(msg);
	out = get_output(msg);
	ft_striter(out, &ft_uppercase);
	ft_putstr(out);
	command = ft_strjoin("say -v Zarvox \"", ft_strjoin(out, "\""));
	system(command);
	ft_strdel(&command);
	ft_strdel(&out);
	ft_strdel(&msg);
	system("killall voice_interface");
}
