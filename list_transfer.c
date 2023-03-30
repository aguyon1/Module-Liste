/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_transfer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:56:25 by aguyon            #+#    #+#             */
/*   Updated: 2023/03/30 16:54:41 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_transfer(t_list *src, t_list *dest, void (*del)(void *))
{
	list_destroy(dest, del);
	*dest = *src;
	list_init(src);
}
