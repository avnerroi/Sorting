#include <stdio.h>

int main()
{
    int arr[10] = {29, 10, 14, 37, 13, 22, 11, 50, 45, 55};
    int i, j, min, temp;
    int comparison = 0;
    int swap = 0;

    printf("Unsorted array: ");
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    for (i = 0; i < 10 - 1; i++)
    {
        min = i;

        for (j = i + 1; j < 10; j++) //finf the smallest number with the first unsorted position
        {
            comparison++;
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

            // swap the smallest number with the first unsorted position
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        swap++;
    }

    // Print the sorted array
    printf("\nSorted Array:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nComparison %d", comparison);
    printf("\nSwap %d", swap);

    return 0;
}
