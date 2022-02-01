#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node *root = NULL, *cur, *temp;

struct node *create()
{
	cur = (struct node*)malloc(sizeof(struct node));
	printf("enter the data");	
	scanf("%d",&(cur->data));
	cur->left = NULL;
	cur->right = NULL;
	if(root == NULL)
		root = cur;
	else
	{
		temp = root;
		while(temp != NULL)
		{
			if(cur->data < temp->data && temp->left == NULL)
			{
				temp->left = cur;
				return root;
			}
			else if(cur->data < temp->data && temp->left != NULL)
				temp = temp->left;
			else if(cur->data > temp->data && temp->right == NULL)
			{
				temp->right = cur;
				return root;
			}
			else if(cur->data > temp->data && temp->right != NULL)
				temp = temp->right;
			}	
		}
}


void preorder(struct node *root)
{
	if(root != NULL)
	{
		printf("%d	",root->data);
		preorder(root->left);
		preorder(root->right);
	}
	
}

void inorder(struct node *root)
{
	if(root != NULL)
	{
		inorder(root->left);
		printf("%d	",root->data);
		inorder(root->right);
	}
}

void postorder(struct node *root)
{
	if(root != NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d	", root->data);
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n 1. create \n 2. preorder \n 3. inorder \n 4. postorder \n 5. exit");
		printf("enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: root = create();
					break;
			case 2: preorder(root);
					break;
			case 3: inorder(root);
					break;
			case 4: postorder(root);
					break;
			case 5: exit(0);
		}
	}
 }
 
 /* Output
 1. create
 2. preorder
 3. inorder
 4. postorder
 5. exitenter your choice1
enter the data75

 1. create
 2. preorder
 3. inorder
 4. postorder
 5. exitenter your choice1
enter the data43

 1. create
 2. preorder
 3. inorder
 4. postorder
 5. exitenter your choice1
enter the data67

 1. create
 2. preorder
 3. inorder
 4. postorder
 5. exitenter your choice1
enter the data89

 1. create
 2. preorder
 3. inorder
 4. postorder
 5. exitenter your choice1
enter the data56

 1. create
 2. preorder
 3. inorder
 4. postorder
 5. exitenter your choice1
enter the data23

 1. create
 2. preorder
 3. inorder
 4. postorder
 5. exitenter your choice1
enter the data22

 1. create
 2. preorder
 3. inorder
 4. postorder
 5. exitenter your choice1
enter the data32

 1. create
 2. preorder
 3. inorder
 4. postorder
 5. exitenter your choice1
enter the data84

 1. create
 2. preorder
 3. inorder
 4. postorder
 5. exitenter your choice1
enter the data100

 1. create
 2. preorder
 3. inorder
 4. postorder
 5. exitenter your choice1
enter the data45

 1. create
 2. preorder
 3. inorder
 4. postorder
 5. exitenter your choice2
75 43 23 22 32 67 56 45 89 84 100
 1. create
 2. preorder
 3. inorder
 4. postorder
 5. exitenter your choice3
22 23 32 43 45 56 67 75 84 89 100
 1. create
 2. preorder
 3. inorder
 4. postorder
 5. exitenter your choice4
22 32 23 45 56 67 43 84 100 89 75
 1. create
 2. preorder
 3. inorder
 4. postorder
 5. exitenter your choice5
cse@cselab:~/Desktop$ 
*/
