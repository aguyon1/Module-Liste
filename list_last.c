/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_last.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:41:37 by aguyon            #+#    #+#             */
/*   Updated: 2023/03/30 13:44:20 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_element *list_last(t_list *list)
{
	return (list->last);
}