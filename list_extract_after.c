/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_extract_after.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:47:18 by aguyon            #+#    #+#             */
/*   Updated: 2023/03/30 13:58:02 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_element *list_extract_after(t_list *list, t_element *elem)
{
	t_element *element_to_extract;

	if (elem == NULL)
	{
		list_extract_front(list);
	}
	else
	{
		element_to_extract = elem->next;
		if (element_to_extract != NULL)
		{
			elem->next = element_to_extract->next;
			if (element_to_extract == list->last)
				list->last = elem;
		}

	}
	return (element_to_extract);
}