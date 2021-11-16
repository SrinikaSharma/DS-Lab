#include <stdio.h>
int linearSearch(int[], int , int);
int main()
{
    int n,arr[10],key,result,i;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    printf("\nenter the elements : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the element to find : ");
    scanf("%d",&key);
    result = linearSearch(arr,n,key);
    if (result == -1)
    {
        printf("\nElement not found");
    }
    else
    {
        printf("\nElement found at %d ",result + 1);
    }
}

int linearSearch(int a[10], int n, int key)
{
    int i;
    for(i = 0 ; i < n; i++)
    {
        if(a[i] == key)
            return i;
    }
    return -1;
}

/* Output :
enter the number of elements : 5
enter the elements : 5 8 9 3 2
Enter the element to find : 9
Element found at 3 */

/* Output :
enter the number of elements : 5
enter the elements : 5 8 9 3 2
Enter the element to find : 4
Element not found */
