#include <stdio.h>
int linearSearch(int[], int , int, int);
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
    result = linearSearch(arr,n,key,0);
    if (result == -1)
    {
        printf("\nElement not found");
    }
    else
    {
        printf("\nElement found at %d ",result + 1);
    }
}

int linearSearch(int a[10], int n, int key, int index)
{
    if (index >= n)
    {
        return 0;
    }
    else if(a[index] == key)
    {
        return index;
    }
    else
    {
        return linearSearch(a,n,key,index+1);
    }
    return -1;
}
