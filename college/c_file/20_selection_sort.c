/*
SELECTION SORT
assume the element at the 0th position as the smallest
compare it with element at 1st position
compare with second position
suppose  element at 2nd is the smallest, so rename
2nd index wala smallest ho jayga
compare that with others
now, swap the smallest with the elemnt at first position

repeat this process with n-1 elements, leave the element at 0th position
 */

 #include <stdio.h>

// Function to perform selection sort
void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;

    for (i = 0; i < n - 1; i++) {
        // Find the index of the minimum element in the remaining unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        // Swap the found minimum element with the first element
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}
