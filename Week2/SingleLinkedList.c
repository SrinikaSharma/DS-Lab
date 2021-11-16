#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *link;
};
struct node *head = NULL, *cur, *temp, *temp1;

// CREATING A NODE

struct node * create()
{
	int n;
	printf("Enter the number of nodes");
	scanf("%d", &n);
	while(n--)
	{
		cur = (struct node*)malloc(sizeof(struct node));
		printf("Enter the data of node");
		scanf("%d", &(cur->data));
		cur->link = NULL;
	if(head == NULL)
	{
		head = cur;
	}
	else 
	{
		temp = head;
		while(temp->link != NULL)
			temp = temp->link;
		temp->link = cur;
	}
}
	return head;
}

// INSERT NODE AT BEGINNING

struct node * insert_beg(int ele)
{
	cur = (struct node*)malloc(sizeof(struct node));
	cur -> data = ele;
	cur -> link = head;
	head = cur;
	return head;
}

// INSERT NODE AT END

struct node * insert_end(int ele)
{
	cur = (struct node*)malloc(sizeof(struct node));
	cur -> data = ele;
	cur -> link = NULL;
	temp = head;
	while(temp->link != NULL)
	{
		 	temp = temp->link;
	}
	temp->link = cur;
	return head;
}

// INSERT NODE AT A POSITION

struct node * insert_pos(int ele, int pos)
{
	cur = (struct node*)malloc(sizeof(struct node));
	cur -> data = ele;
	int c = 1;
	temp = head;
	while( c < pos - 1)
	{
		temp = temp->link;
		c++;
	}
	cur->link = temp -> link;
	temp->link = cur;
	return head;
}

// DELETE A NODE AT BEGINNING

struct node * delete_beg(struct node *head)
{
	temp = head;
	head = head->link;
	printf("deleted element is %d",temp->data);
	free(temp);
	return head;
}

// DELETE A NODE AT END

struct node * delete_end(struct node *head)
{
	temp = head;
	while(temp->link != NULL)
	{
		temp1 = temp;
		temp = temp->link;
	}
	printf("deleted element is %d",temp->data);
	free(temp);
	temp1->link = NULL;
	return head;
}

// DELETE A NODE AT A POSITION

struct node * delete_pos(struct node *head,int pos)
{
	int c = 1;
	temp = head;
	while(c < pos)
	{
		temp1 = temp;
		temp = temp->link;
		c++;
	}
	temp1->link = temp->link;
	printf("deleted element is %d",temp->data);
	free(temp);
	return head;
}

// DISPLAY

void display(struct node *head)
{
	temp = head;
	while(temp != NULL)
	{
		printf("%d ->",temp->data);
		temp = temp->link;
	}
}

// SORTING

struct node * sort(struct node *head)
{
	temp = head;
	int swap;
	while(temp!=NULL)
	{
		temp1 = temp->link;
		while(temp1 != NULL)
		{
			if(temp->data > temp1->data)
			{
				swap = temp->data;
				temp->data = temp1->data;
				temp1->data = swap;
			}
			temp1 = temp1->link;
		}
		temp = temp->link;
	}
	return head;
}

// REVERSE DISPLAY
	
void reverse_disp(struct node*head)
{
	if(head!=NULL)
	{
		reverse_disp(head->link);
		printf("%d	",head->data);
	}
}

// SEARCHING

int search(struct node* head, int key)
{
	int c = 1;
	temp = head;
	while(temp != NULL)
	{
		if(key == temp->data)
		{
			return c;
		}
		c++;
		temp = temp->link;
	}
	return -1;
}

// MAIN

int main()
{
	int ch,ele,pos,key;
	while(1)
{
	printf("\n 1.Create \n 2.Insert at Beginning \n 3.Insert at End \n 4.Insert at Position \n 5.Delete at Beginning \n 6.Delete at End \n 7.Delete at Position \n 8.Display \n 9.Sort \n 10.Reverse Display \n 11.Search \n 12. Exit \n");
	printf("Enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1 : head = create();
			break;
		case 2 : printf("enter the element to be added"); 
			scanf("%d",&ele); 
			head = insert_beg(ele);
			break;
		case 3 : printf("enter the element to be added");
			scanf("%d",&ele);
			head = insert_end(ele);
			break;
		case 4 : printf("enter the element and position");
			scanf("%d %d",&ele,&pos);
			head = insert_pos(ele,pos);
			break;
		case 5 : head = delete_beg(head);
			break;
		case 6 : head = delete_end(head);
			break;
		case 7 : printf("enter the position to be deleted");
			scanf("%d",&pos);
			head = delete_pos(head,pos);
			break;
		case 8 : display(head);
			break;
		case 9 : head = sort(head);
			break;
		case 10 : reverse_disp(head);
			break;
		case 11 : printf("enter the key value");
			scanf("%d",&key);
			pos = search(head,key);
			if(pos == -1)
				printf("element not found");
			else
				printf("element found at position %d",pos);
			break;
		case 12 : exit(0);
			break;
		}
}
}

/*  1.Create
 2.Insert at Beginning
 3.Insert at End
 4.Insert at Position
 5.Delete at Beginning
 6.Delete at End
 7.Delete at Position
 8.Display
 9.Sort
 10.Reverse Display
 11.Search
 12. Exit
Enter your choice1
Enter the number of nodes5
Enter the data of node80
Enter the data of node30
Enter the data of node50
Enter the data of node20
Enter the data of node70

 1.Create
 2.Insert at Beginning
 3.Insert at End
 4.Insert at Position
 5.Delete at Beginning
 6.Delete at End
 7.Delete at Position
 8.Display
 9.Sort
 10.Reverse Display
 11.Search
 12. Exit
Enter your choice8
80 ->30 ->50 ->20 ->70 ->
 1.Create
 2.Insert at Beginning
 3.Insert at End
 4.Insert at Position
 5.Delete at Beginning
 6.Delete at End
 7.Delete at Position
 8.Display
 9.Sort
 10.Reverse Display
 11.Search
 12. Exit
Enter your choice2
enter the element to be added10

 1.Create
 2.Insert at Beginning
 3.Insert at End
 4.Insert at Position
 5.Delete at Beginning
 6.Delete at End
 7.Delete at Position
 8.Display
 9.Sort
 10.Reverse Display
 11.Search
 12. Exit
Enter your choice8
10 ->80 ->30 ->50 ->20 ->70 ->
 1.Create
 2.Insert at Beginning
 3.Insert at End
 4.Insert at Position
 5.Delete at Beginning
 6.Delete at End
 7.Delete at Position
 8.Display
 9.Sort
 10.Reverse Display
 11.Search
 12. Exit
Enter your choice3
enter the element to be added100

 1.Create
 2.Insert at Beginning
 3.Insert at End
 4.Insert at Position
 5.Delete at Beginning
 6.Delete at End
 7.Delete at Position
 8.Display
 9.Sort
 10.Reverse Display
 11.Search
 12. Exit
Enter your choice8
10 ->80 ->30 ->50 ->20 ->70 ->100 ->
 1.Create
 2.Insert at Beginning
 3.Insert at End
 4.Insert at Position
 5.Delete at Beginning
 6.Delete at End
 7.Delete at Position
 8.Display
 9.Sort
 10.Reverse Display
 11.Search
 12. Exit
Enter your choice4
enter the element and position5 
40
 1.Create
 2.Insert at Beginning
 3.Insert at End
 4.Insert at Position
 5.Delete at Beginning
 6.Delete at End
 7.Delete at Position
 8.Display
 9.Sort
 10.Reverse Display
 11.Search
 12. Exit
Enter your choice5
deleted element is 10
 1.Create
 2.Insert at Beginning
 3.Insert at End
 4.Insert at Position
 5.Delete at Beginning
 6.Delete at End
 7.Delete at Position
 8.Display
 9.Sort
 10.Reverse Display
 11.Search
 12. Exit
Enter your choice6
deleted element is 100
 1.Create
 2.Insert at Beginning
 3.Insert at End
 4.Insert at Position
 5.Delete at Beginning
 6.Delete at End
 7.Delete at Position
 8.Display
 9.Sort
 10.Reverse Display
 11.Search
 12. Exit
Enter your choice7
enter the position to be deleted3
deleted element is 50
 1.Create
 2.Insert at Beginning
 3.Insert at End
 4.Insert at Position
 5.Delete at Beginning
 6.Delete at End
 7.Delete at Position
 8.Display
 9.Sort
 10.Reverse Display
 11.Search
 12. Exit
Enter your choice9

 1.Create
 2.Insert at Beginning
 3.Insert at End
 4.Insert at Position
 5.Delete at Beginning
 6.Delete at End
 7.Delete at Position
 8.Display
 9.Sort
 10.Reverse Display
 11.Search
 12. Exit
Enter your choice8
20 ->30 ->40 ->70 ->80 ->
 1.Create
 2.Insert at Beginning
 3.Insert at End
 4.Insert at Position
 5.Delete at Beginning
 6.Delete at End
 7.Delete at Position
 8.Display
 9.Sort
 10.Reverse Display
 11.Search
 12. Exit
Enter your choice10
80      70      40      30      20
 1.Create
 2.Insert at Beginning
 3.Insert at End
 4.Insert at Position
 5.Delete at Beginning
 6.Delete at End
 7.Delete at Position
 8.Display
 9.Sort
 10.Reverse Display
 11.Search
 12. Exit
Enter your choice11
enter the key value70
element found at position 4
 1.Create
 2.Insert at Beginning
 3.Insert at End
 4.Insert at Position
 5.Delete at Beginning
 6.Delete at End
 7.Delete at Position
 8.Display
 9.Sort
 10.Reverse Display
 11.Search
 12. Exit
Enter your choice12 
*/ 
