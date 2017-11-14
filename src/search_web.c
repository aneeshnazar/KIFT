/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_web.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlu <mlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 18:17:34 by mlu               #+#    #+#             */
/*   Updated: 2017/11/12 16:42:33 by mlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <server.h>

char	*search_web(void)
{
	system("open http://bfy.tw/F2FH");
	return (ft_strdup("Here, let me help you learn how to search the web\n"));
}
