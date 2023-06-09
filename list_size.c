/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:58:33 by aguyon            #+#    #+#             */
/*   Updated: 2023/03/30 16:37:49 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

size_t	list_size(t_list *list)
{
	size_t		count;
	t_element	*current;

	count = 0;
	list_open(list);
	current = list_current(list);
	while (list_end(list))
	{
		count++;
		current = list_current(list);
	}
	return (count);
}
