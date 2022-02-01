#include<stdio.h>
void selSort(int [],int);
int main()
{
    int ar[50] , item,n ,i, index;
    printf("Enter number of array elements\n");
    scanf("%d",&n);
    printf("\nEnter array elements\n");
    for(i = 0; i < n;i++ )
    {
        printf("\nEnter element %d \t",i);
        scanf("%d",&ar[i]);
    }
    selSort(ar,n);
    printf("\nThe sorted array is \n");
    for(i = 0;i < n; i++)
    {
        printf("%d \t",ar[i]);
    }
}
void selSort(int ar[],int size)
{
    int small,pos,temp;
    int i,j;
    for( i = 0; i < size - 1; i++)
    {
        small = ar[i];
        pos = i ;
        for(j = i + 1; j < size; j++)
        {
            if(ar[j] < small)
            {
                small = ar[j];
                pos = j;
            }
        }
        temp = ar[i];
        ar[i] = ar[pos];
        ar[pos] = temp;
    }
}

/* Output :

Enter number of array elements
5

Enter array elements

Enter element 0         12

Enter element 1         96

Enter element 2         47

Enter element 3         64

Enter element 4         37

The sorted array is
12      37      47      64      96
--------------------------------


Enter number of array elements
5

Enter array elements

Enter element 0         23

Enter element 1         57

Enter element 2         45

Enter element 3         41

Enter element 4         68

The sorted array is
23      41      45      57      68
--------------------------------


Enter number of array elements
6

Enter array elements

Enter element 0         17

Enter element 1         9

Enter element 2         62

Enter element 3         26

Enter element 4         31

Enter element 5         15

The sorted array is
9       15      17      26      31      62
--------------------------------
*/ 
