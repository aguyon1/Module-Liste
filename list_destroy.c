/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_destroy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:36:23 by aguyon            #+#    #+#             */
/*   Updated: 2023/03/30 16:29:56 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_destroy(t_list *list, void (*del)(void *))
{
	t_element	*current;

	list_open(list);
	while (!list_end(list))
	{
		current = list_current(list);
		del(current);
	}
	list_init(list);
}
