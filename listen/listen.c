/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 16:39:03 by dgerard           #+#    #+#             */
/*   Updated: 2017/10/24 16:39:08 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>

int				main(void)
{
	system("pocketsphinx_continuous -inmic yes -logfn /dev/null\
		-lm lang_mod_0.lm -dict dic_0.dic");
	// -logfn silence log
	// -inmic listen through mic
	// -lm specify custom language model
	// -dict specify custom dictionary
}
