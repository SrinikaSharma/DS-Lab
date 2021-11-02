#include <stdio.h>
int BinarySearching(int[], int , int, int, int);
int main()
{
    int i, key, n, arr[50], position;
    printf("Enter the Limit of Elements in Array:\t");
    scanf("%d", &n);
    printf("Enter %d Elements in Array: \n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter Element To Search:\t");
    scanf("%d", &key);
    position = BinarySearching(arr, n, key,0,n-1);
    if(position == -1)
    {
        printf("Element %d Not Found\n", key);
    }
    else
    {
        printf("Element %d Found at Position %d\n", key, position + 1);
    }
}

int BinarySearching(int arr[], int n, int key, int low, int high)
{
    int mid;
    if(low <= high)
    {
        mid = (low + high) / 2;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] > key)
            return BinarySearching(arr,n,key,low,mid-1);
        else if(arr[mid] < key)
            return BinarySearching(arr,n,key,mid+1,high);
    }
    return -1;
}

