/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_current.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 14:22:44 by aguyon            #+#    #+#             */
/*   Updated: 2023/03/30 16:29:44 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_element	*list_current(t_list *list)
{
	t_element	*current;

	current = list->current;
	if (list->current != NULL)
		list->current = list->current->next;
	return (current);
}
