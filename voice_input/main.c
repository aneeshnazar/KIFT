/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <anazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 20:20:39 by anazar            #+#    #+#             */
/*   Updated: 2017/11/11 13:56:32 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		main(void)
{
	system("~/.brew/Cellar/cmu-pocketsphinx/HEAD-26c6d9d/bin/pocketsphinx_continuous\
			-inmic yes -logfn /dev/null\
			-lm lang_mod_0.lm -dict dic_0.dic");
	return (0);
}
