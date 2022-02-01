#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*link;
};
struct node*head = NULL,*cur,*temp,*temp1;

struct node*create()
{
    int n;
    printf("Enter no. of nodes:");
    scanf("%d",&n);
    while(n--){
            cur = (struct node*)malloc(sizeof(struct node));
            printf("\nenter the element : ");
            scanf("%d",&(cur->data));
            if(head==NULL)
			{
				cur->link = cur;
                head = cur;
            }
            else
			{
                temp=head;
                while(temp->link!=head)
                    temp=temp->link;
                temp->link=cur;
                cur->link = head;
                
            }
    }
    return head;
 }
 
struct node*insert_begin(int ele)
{
	cur = (struct node*)malloc(sizeof(struct node));
    cur->data=ele;
    temp=head;
    while(temp->link != head)
    	temp = temp->link;
    temp->link = cur;
    cur->link = head;
    head = cur;
    return head;
}

struct node*insert_end(int ele)
{
	cur = (struct node*)malloc(sizeof(struct node));
    cur->data=ele;
    temp=head;
    while(temp->link != head)
    	temp = temp->link;
    temp->link = cur;
    cur->link = head;
    return head;
}

struct node*insert_pos(int pos,int ele)
{
    int c=1;
    cur = (struct node*)malloc(sizeof(struct node));
    cur->data=ele;
    temp=head;
    while(c<pos-1){
            temp=temp->link;
            c++;
    }
    cur->link=temp->link;
    temp->link=cur;
    return head;
}

struct node*delete_begin(struct node*head)
{
    temp=head;
    while(temp->link != head)
    	temp = temp->link;
    temp1 = head;
    temp->link = temp1->link;
    head = temp1->link;
    printf("deleted element %d",temp->data);
    free(temp1);
    return head;
}

struct node*delete_pos(struct node*head,int pos)
{
    temp=head;
    int c=1;
    while(c<pos){
            temp1=temp;
            temp=temp->link;
            c++;
    }
    temp1->link=temp->link;
    printf("deleted element %d",temp->data);
    free(temp);
    return head;
}

void display(){  
    temp = head;   
    printf("Nodes of the circular linked list: \n");  
    do{    
	    printf("%d -> ", temp->data);  
        temp = temp->link;  
    }while(temp != head);  
    printf("\n");  
}  

int main(){
    int ch,ele,pos,key;
    while(1){
        printf("\n1-create\n2-insert at begin\n3-insert at end\n4-insert at pos\n5-delete at begin\n6-delete at pos\n7-display\n8-exit\n");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1 : head = create();
                     break;
            case 2 : printf("\nenter the element to insert: ");
					           scanf("%d",&ele);
                     head = insert_begin(ele);
                     break;
            case 3 : printf("\nenter the element to insert: ");
					           scanf("%d",&ele);
                     head = insert_end(ele);
                     break;
            case 4 : printf("\nenter the position and element: ");
					           scanf("%d",&pos);
                     scanf("%d",&ele);
                     head = insert_pos(pos,ele);
                     break;
            case 5 : head = delete_begin(head);
                     break;
            case 6 : printf("\nenter the position to delete: ");
					           scanf("%d",&pos);
                     head = delete_pos(head,pos);
                     break;
            case 7 : display(head);
                     break;
            case 8 : exit(0);
        }
    }
 }         


/* Output:

1-create
2-insert at begin
3-insert at end
4-insert at pos
5-delete at begin
6-delete at pos
7-display
8-exit

Enter your choice : 1
Enter no. of nodes:5

enter the element : 10

enter the element : 20

enter the element : 30

enter the element : 40

enter the element : 50

1-create
2-insert at begin
3-insert at end
4-insert at pos
5-delete at begin
6-delete at pos
7-display
8-exit

Enter your choice : 2

enter the element to insert: 60

1-create
2-insert at begin
3-insert at end
4-insert at pos
5-delete at begin
6-delete at pos
7-display
8-exit

Enter your choice : 3

enter the element to insert: 70

1-create
2-insert at begin
3-insert at end
4-insert at pos
5-delete at begin
6-delete at pos
7-display
8-exit

Enter your choice : 7
Nodes of the circular linked list:
60 -> 10 -> 20 -> 30 -> 40 -> 50 -> 70

1-create
2-insert at begin
3-insert at end
4-insert at pos
5-delete at begin
6-delete at pos
7-display
8-exit

Enter your choice : 5
deleted element 70
1-create
2-insert at begin
3-insert at end
4-insert at pos
5-delete at begin
6-delete at pos
7-display
8-exit

Enter your choice : 6

enter the position to delete: 3
deleted element 30
1-create
2-insert at begin
3-insert at end
4-insert at pos
5-delete at begin
6-delete at pos
7-display
8-exit

Enter your choice : 7
Nodes of the circular linked list:
10 -> 20 -> 40 -> 50 ->70

1-create
2-insert at begin
3-insert at end
4-insert at pos
5-delete at begin
6-delete at pos
7-display
8-exit

Enter your choice : 8

--------------------------------

*/
