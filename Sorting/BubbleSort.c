#include<stdio.h>
void bubbleSort(int [],int);
int main()
{
    int a[10],n,i;
    printf("Enter the num of array elements : ");
    scanf("%d",&n);
    printf("\nEnter the array elements");
    for(i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    bubbleSort(a,n);
    printf("\nAfter sorting : ");
    for(i = 0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
void bubbleSort(int a[],int n)
{
    int i,j,temp;
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

/*
Output:

Enter the num of array elements : 5

Enter the array elements45
86
20
74
39

After sorting : 20 39 45 74 86


Enter the num of array elements : 7
--------------------------------

Enter the array elements25
87
67
12
46
98
51

After sorting : 12 25 46 51 67 87 98
--------------------------------

Enter the num of array elements : 6

Enter the array elements25
48
23
57
17
9

After sorting : 9 17 23 25 48 57
--------------------------------
