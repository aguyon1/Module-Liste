/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:58:37 by aguyon            #+#    #+#             */
/*   Updated: 2023/03/30 16:55:02 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include <stdlib.h>
# include <stdbool.h>

typedef struct s_element
{
	void				*data;
	struct s_element	*next;
}	t_element;

typedef struct s_list
{
	t_element	*first;
	t_element	*last;
	t_element	*current;
}	t_list;

void		list_init(t_list *list);
bool		list_empty(t_list *list);


void		list_insert_front(t_list *list, t_element *element);
void		list_insert_back(t_list *list, t_element *element);
void		list_insert_after(t_list *list, t_element *element, t_element *new);
void		list_insert_order(t_list *list, t_element *new, int (*cmp)(void *, void *));

t_element	*list_extract_front(t_list *list);
t_element	*list_extract_back(t_list *list);
t_element	*list_extract_after(t_list *list, t_element *element);

void		list_open(t_list *list);
bool		list_end(t_list *list);
t_element	*list_current(t_list *list);

void		list_destroy(t_list *list, void (*del)(void *));
void		list_transfer(t_list *src, t_list *dest, void (*del)(void *));

#endif
