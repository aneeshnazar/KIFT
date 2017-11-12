/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <anazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:31:24 by anazar            #+#    #+#             */
/*   Updated: 2017/11/11 16:35:04 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include <server.h>

int	main(void)
{
	char		*msg;
	char		*out;

	get_next_line(0, &msg);
	ft_putendl(msg);
	out = get_output(msg);
	ft_putstr(out);
	ft_strdel(&out);
	ft_strdel(&msg);
	system("killall voice_interface");
}
