/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:25:19 by aguyon            #+#    #+#             */
/*   Updated: 2023/03/30 17:29:16 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_map(t_list *list, void *(*f)(void *))
{
	t_element	*current;

	list_open(list);
	while (!list_end(list))
	{
		current = list_current(list);
		f(current->data);
	}
}
