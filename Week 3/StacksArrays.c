#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int i,ele,top = -1,stack[SIZE];
void push(int ele){
     stack[++top] = ele;
}
int pop(){
    return(stack[top--]);
}
int peek(){
    return(stack[top]);
}
void display(){
     for(i = top; i >= 0; i--){
         printf("%d\n",stack[i]);
     }
}
int main(){
    int ch;
    while(1){
          printf("\n1-push\n2-pop\n3-peek\n4-display\n5-exit");
          printf("\nEnter your choice : ");
          scanf("%d",&ch);
          switch(ch){
                case 1 : if(top == SIZE - 1){
                                  printf("stack overflow");
                        }
                        else{
                            printf("Enter element to be inserted : ");
                            scanf("%d",&ele);
                            push(ele);
                       }
                       break;
                case 2 : if(top == -1){
                                 printf("stack underflow");
                         }
                         else{
                             printf("deleted element is %d",pop());
                         }
                         break;
                case 3 : if(top == -1){
                                 printf("stack underflow");
                         }
                         else{
                             printf("top element is %d",peek());
                         }
                         break;
                case 4 : if(top == -1){
                                 printf("stack underflow");
                         }
                         else{
                              display();
                         }
                         break;
                case 5 : exit(0);


            }
    }
}


/*Output:
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice : 1
Enter element to be inserted : 6


1-push
2-pop
3-peek
4-display
5-exit
Enter your choice : 1
Enter element to be inserted : 2


1-push
2-pop
3-peek
4-display
5-exit
Enter your choice : 1
Enter element to be inserted : 3


1-push
2-pop
3-peek
4-display
5-exit
Enter your choice : 4
3
2
6


1-push
2-pop
3-peek
4-display
5-exit
Enter your choice : 2
deleted element is 3
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice : 4
2
6


1-push
2-pop
3-peek
4-display
5-exit
Enter your choice : 3
top element is 2
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice : 5
*/
