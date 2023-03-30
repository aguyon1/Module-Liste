#include "list.h"
#include <stdio.h>

int menu(void)
{
	int choix;

	do
	{
		printf("\n\nTEST MODULE\n\n");
		printf("0 - Quitter\n");
		printf("1 - Insertion en tete de liste\n");
		
	} while (choix >= 0 && choix <= 9);
}

int main(void)
{
	t_list *list;

	list = (t_list *) malloc(sizeof(t_list));
	list_init(list);
	printf("%d\n", list_empty(list));
	return (0);
}
