#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	
} *head,*tail, *new_node, *temp;


int main()
{

	int value, n;

	
	printf("Enter number of elements: ");
	scanf("%d", &n);
	head=NULL;
	
	for (int i = 0; i<n; i++)
	{
	
		new_node = (struct node*)malloc(sizeof(struct node));
		printf("Enter value: ");
		scanf("%d", &value);
		new_node->data = value;
		new_node->next = NULL;
		
		if (head == NULL)
		{
				head = new_node;
				tail = new_node;
			
		}
		else
		{
				tail->next=new_node;
				tail=new_node;
		}
		
		
	}
	
	temp = head;
	
	while(temp!=NULL)
	{
			printf("%d", temp->data);
			temp = temp->next;
	}
	
	
	
}
