#include "list.h"
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putint(int n)
{
	if (n < 0)
		ft_putchar('-'), ft_putint(-n);
	if (n > 10)
		ft_putint(n / 10);
	ft_putchar(n % 10 + '0');

}

void	print_int(void *n)
{
	ft_putint(*(int *)n);
}

int menu(void)
{
	int choix;

	printf("\n\nTEST MODULE\n\n");
	printf("0 - Quitter\n");
	printf("1 - Afficher liste\n");
	printf("2 - Inserer en tete de liste\n");
	printf("3 - Inserer en fin de liste\n");
	printf("4 - Extraire la tete de liste\n");
	printf("5 - Extraire en fin de liste\n");
	printf("6 - Extraire apres un element\n");
	printf("7 - Parcourir la liste\n");
	printf("8 - Recherche un element\n");
	printf("9 - Detruire la liste\n");
	printf("\nVotre choix ? : ");
	scanf("%d", &choix);
	printf("\n");
	return (choix);
}

// int voidpointer_to_int(void *data)
// {
// 	return (*(int *)data);
// }

int main(void)
{
	t_list list;
	t_list *list_ptr = &list;
	t_element *element;
	int *n;
	list_init(list_ptr);
	while (true)
	{
		switch(menu())
		{
			case 0:
				return (0);
			case 1:
				list_print(list_ptr, print_int);
				break ;
			case 2:
				element = malloc(sizeof(t_element));
				n = malloc(sizeof(int));
				printf("Entrer l'element a inserer : ");
				scanf("%d", n);
				element->data = (void *)n;
				list_insert_front(&list, element);
				break ;
			case 3:
				element = malloc(sizeof(t_element));
				n = malloc(sizeof(int));
				printf("Entrer l'element a inserer : ");
				scanf("%d", n);
				element->data = (void *)n;
				list_insert_back(&list, element);
				break ;
			case 4:
				printf("Vous avez extrait : %d\n", *(int *)list_extract_front(&list));
				break ;
			case 5:
				break ;
			case 6:
				break ;
			case 7:
				break ;
			case 8:
				break ;
			case 9:
				break ;
			default:
				printf("Action inconnue");
				break ;
		}
	}
	return (0);
}
