/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_insert_order.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 16:10:14 by aguyon            #+#    #+#             */
/*   Updated: 2023/03/30 16:47:19 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_insert_order(t_list *list, t_element *new,
	int (*cmp)(void *, void *))
{
	t_element	*current;
	t_element	*prec;

	if (list_empty(list))
	{
		return (list_insert_front(list, new));
	}
	else
	{
		list_open(list);
		current = list_current(list);
		if (cmp(new, current) == 1)
		{
			return (list_insert_front(list, new));
		}
		while (!list_end(list))
		{
			prec = current;
			current = list_current(list);
			if (cmp(new, current) == 1)
				return (list_insert_after(list, prec, new));
		}
		return (list_insert_back(list, new));
	}
}
