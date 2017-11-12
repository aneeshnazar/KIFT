/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_email.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlu <mlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 18:17:34 by mlu               #+#    #+#             */
/*   Updated: 2017/11/12 16:42:33 by mlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <server.h>

char	*send_email(void)
{
	system("sh ./script/email.script");
	return (ft_strdup("I have sent an email to eggplant man's email\n"));
}
