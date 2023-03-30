/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_insert_after.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 16:45:04 by aguyon            #+#    #+#             */
/*   Updated: 2023/03/30 16:45:37 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_insert_after(t_list *list, t_element *element, t_element *new)
{
	if (element == NULL)
	{
		list_insert_front(list, new);
	}
	else
	{
		new->next = element->next;
		element->next = new;
		if (element == list->last)
			list->last = new;
	}
}
