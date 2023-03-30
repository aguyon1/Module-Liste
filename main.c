#include "list.h"
#include <stdio.h>

int main(void)
{
	t_list *list;

	list = (t_list *) malloc(sizeof(t_list));
	list_init(list);
	printf("%d\n", list_isempty(list));
	return (0);
}
