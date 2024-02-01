#include <stdio.h>
int main()

 {
    int arr[100], size;
    int *ptr, sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter array elements: ");
    for (int i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }
    
    ptr = arr;
    for (int i = 0; i < size; i++)
	 {
        sum = sum + *ptr;
        ptr++; 
    }
    printf("The sum of array elements is: %d", sum);
    return 0;
}
