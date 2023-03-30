/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:58:37 by aguyon            #+#    #+#             */
/*   Updated: 2023/03/29 14:46:46 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include <stdlib.h>
# include <stdbool.h>

typedef struct s_element
{
	void				*element;
	struct s_element	*next;
}	t_element;

typedef struct s_list
{
	t_element	*first;
	t_element	*last;
	t_element	*current;
}	t_list;

void	list_init(t_list *list);
bool	list_isempty(t_list *list);

void	list_insertafter(t_list *list, t_element *element, t_element *new);

void	list_addfront(t_list *list, t_element *element);
void	list_addback(t_list *list, t_element *element);

#endif
