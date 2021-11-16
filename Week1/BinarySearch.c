#include <stdio.h>
int BinarySearching(int[], int , int);
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
    position = BinarySearching(arr, n, key);
    if(position == -1)
    {
        printf("Element %d Not Found\n", key);
    }
    else
    {
        printf("Element %d Found at Position %d\n", key, position + 1);
    }
    return 0;
}

int BinarySearching(int arr[], int n, int key)
{
    int low = 0, high = n - 1, middle;
    while(low <= high)
    {
        middle = (low + high) / 2;
        if(key > arr[middle])
            low = middle + 1;
        else if(key < arr[middle])
            high = middle - 1;
        else
            return middle;
    }
    return -1;
}

/* Output :
Enter the Limit of Elements in Array: 5
Enter 5 Elements in Array: 2 4 6 8 10
Enter Element To Search: 6
Element 6 Found at Position 3 */

/* Output :
Enter the Limit of Elements in Array: 5
Enter 5 Elements in Array: 2 4 6 8 10
Enter Element To Search: 9
Element 9 Not Found */
