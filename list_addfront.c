/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addFrontList.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:03:49 by aguyon            #+#    #+#             */
/*   Updated: 2023/03/29 14:28:09 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_addfront(t_list *list, t_element *new)
{
	new->next = list->first;
	list->first = new;
	if (list->last == NULL)
		list->last = new;
}
