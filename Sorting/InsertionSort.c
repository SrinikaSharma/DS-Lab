#include<stdio.h>
void insertionSort(int [],int n);
int main()
{
    int a[10],n,i;
    printf("Enter the number of array elements ");
    scanf("%d",&n);
    printf("\nEnter array elements ");
    for(i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    insertionSort(a,n);
}
void insertionSort(int a[],int n)
{
    int i,j,index;
    for(i = 1;i<n; i++)
    {
        index = a[i];
        j = i-1;
        while(j >= 0 && a[j] > index)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = index;
    }
    for(i = 0; i < n; i++)
    {
        printf("%d \t",a[i]);
    }
}

/* Output :

Enter the number of array elements 5

Enter array elements 23
45
87
12
94
12      23      45      87      94
--------------------------------

Enter the number of array elements 5

Enter array elements 98
23
51
72
100
23      51      72      98      100
--------------------------------

Enter the number of array elements 5

Enter array elements 500
200
300
100
400
100     200     300     400     500
--------------------------------
*/
