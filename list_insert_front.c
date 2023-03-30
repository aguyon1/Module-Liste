/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_insert_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 16:41:04 by aguyon            #+#    #+#             */
/*   Updated: 2023/03/30 16:41:06 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_insert_front(t_list *list, t_element *new)
{
	new->next = list->first;
	list->first = new;
	if (list->last == NULL)
		list->last = new;
}
