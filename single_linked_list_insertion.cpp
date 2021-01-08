#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	
} *head,*tail, *new_node, *temp;

void create_linked_list(int value)
{
		new_node = (struct node*)malloc(sizeof(struct node));
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

void display_linked_list()
{
			
	temp = head;
	
	while(temp!=NULL)
	{
			printf("%d", temp->data);
			temp = temp->next;
	}
	
	
}

void insert_in_linked_list_beginning(int value)
{
		new_node = (struct node*)malloc(sizeof(struct node));
		new_node->data=value;
		new_node->next=head;
		head=new_node;
}

void insert_in_linked_list_end(int value)
{
		new_node = (struct node*)malloc(sizeof(struct node));
		new_node->data = value;
		tail->next = new_node;
		new_node->next=NULL;
		tail=new_node;
}

void insert_in_linked_list_specific(int value, int pos)
{
		new_node = (struct node*)malloc(sizeof(struct node));
		temp=head;
		new_node->data=value;
		
		for(int i=0; i<pos-1;i++)
		{
				temp = temp->next;
				
		}
		new_node->next=temp->next;
		temp->next=new_node;
}
int main()
{

	int value, n;
	char ch;

	
	printf("Enter number of elements: ");
	scanf("%d", &n);
	head=NULL;
	
	for (int i = 0; i<n; i++)
	{
	

		printf("Enter value: ");
		scanf("%d", &value);
		create_linked_list(value);

		
		
	}
	
	
	printf("Do you want to do insertion? Enter Y to start: ");
	fflush(stdout);
	scanf(" %c", &ch);
	
	while(ch=='Y'||ch=='y')
	{		
			int choice, value1, pos;
			printf("Which insertion? 1. Beginning, 2. End, 3. Specific position:");
			scanf("%d", &choice);
			
			if(choice==1)
			{
					printf("Enter value");
					scanf("%d", &value1);
					insert_in_linked_list_beginning(value1);	
			}
			else if(choice==2)
			{
					printf("Enter value");
					scanf("%d", &value1);
					insert_in_linked_list_end(value1);
						
			}
			else if(choice==3)
			{
					printf("Enter value: ");
					scanf("%d", &value1);	
					printf("Enter position: ");
					scanf("%d", &pos);
					insert_in_linked_list_specific(value1,pos);
			}
			else
			{
				printf("Invalid choice");
			}	
			
		printf("Do you want to do insertion again? y for yes");
		scanf(" %c", &ch);
			
	}
	
	
	display_linked_list();

	return 0;
}
