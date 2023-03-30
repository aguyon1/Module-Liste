/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_extract_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:47:24 by aguyon            #+#    #+#             */
/*   Updated: 2023/03/30 16:54:05 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_element	*list_extract_front(t_list *list)
{
	t_element	*element_to_extract;

	element_to_extract = list->first;
	if (!list_empty(list))
	{
		list->first = list->first->next;
		if (list->first == NULL)
			list->last = NULL;
	}
	return (element_to_extract);
}
