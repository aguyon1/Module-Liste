/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addBackList.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:09:34 by aguyon            #+#    #+#             */
/*   Updated: 2023/03/29 14:30:14 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_addback(t_list *list, t_element *new)
{
	list_insertafter(list, list->last, new);
}
