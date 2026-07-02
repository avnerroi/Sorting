#include <stdio.h>

int main()
{
    int arr[10] = {29, 10, 14, 37, 13, 22, 11, 50, 45, 55};
    int i, j, n, temp;
    int comparison = 0;
    int swap = 0;

    printf("Unsorted array: ");
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    for (i = 0; i < 10 - 1; i++)

    {

        // Inner loop: compares adjacent elements
        // Stops earlier each pass because the last i elements are already sorted
        for (j = 0; j < 10 - 2 - i; j++) 
        {
            comparison++;
            if (arr[j] > arr[j + 1])
            { // If current element is greater than next

                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap++;
            }
        }
    }

    // Print the sorted array
    printf("\nSorted Array:");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nComparisons: %d", comparison);
    printf("\nSwaps: %d", swap);

    return 0;
}
