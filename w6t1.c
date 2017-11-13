#include <stdio.h>
#include <stdlib.h>

struct number {
	int jud;
	int num;
	struct number * next;
};

void main()
{
	struct number * head = NULL;
	struct number * prev, * current;
	int temp,jud;

	printf("Enter the first number.\n");
	jud = 1;
	while (jud !=0 && scanf("%d",&temp) != '\0')
	{
		current = (struct number *) malloc(sizeof(struct number));
		if (head == NULL)
			head = current;
		else
			prev->next = current;
		current->next =NULL;
		current->num =temp;
		printf("Enter 0 to stop,enter 1 to continue.\n");
		scanf("%d",&jud);
		printf("Enter the next number\n");
		prev = current;
	}

	if (head == NULL)
		printf("No data entered.");
	else
		printf("Here is the numbers.\n");
	current = head;
	while (current != NULL)
	{
		printf("The number is %d.\n",current->num);
		current = current->next;
	}

	current = head;
	while (head != NULL)
	{
		current = head;
		head = current->next;
		free (current);
	}
	
	printf ("Bye!\n");
}