/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_extract_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:47:22 by aguyon            #+#    #+#             */
/*   Updated: 2023/03/30 16:54:14 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_element	*list_extract_back(t_list *list)
{
	t_element	*element_to_extract;
	t_element	*current;

	if (list_empty(list))
	{
		element_to_extract = NULL;
	}
	else if (list->first == list->last)
	{
		element_to_extract = list->first;
		list->first = NULL;
		list->last = NULL;
	}
	else
	{
		current = list->first;
		while (current->next != list->last)
			current = current->next;
		element_to_extract = current->next;
		current->next = NULL;
		list->last = current;
	}
	return (element_to_extract);
}
