/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertAfter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:01:17 by aguyon            #+#    #+#             */
/*   Updated: 2023/03/29 14:28:44 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_insertafter(t_list *list, t_element *element, t_element *new)
{
	if (element == NULL)
	{
		list_addfront(list, new);
	}
	else
	{
		new->next = element->next;
		element->next = new;
		if (element == list->last)
			list->last = new;
	}
}
