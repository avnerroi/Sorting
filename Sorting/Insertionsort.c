#include <stdio.h>

int main()
{
    int arr[10] = {29, 10, 14, 37, 13, 22, 11, 50, 45, 55};
    int i, j, key;
    int comparison = 0;
    int swap = 0;

    printf("Unsorted array: ");
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    for (i = 1; i < 10; i++)
    {
        key = arr[i]; //number to insert in the corrected place
        j = i - 1;

        while (j >= 0) //move bigger numbers to the right
        {
            comparison++;

            if (arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j--;
                swap++; // shifting
            }
            else
            {
                break;
            }
        }

        arr[j + 1] = key; //place the number in the correct position
    }

    printf("\nSorted Array: ");
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    printf("\nComparisons: %d", comparison);
    printf("\nShifts: %d", swap);

    return 0;
}