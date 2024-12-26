#include <stdio.h>

// Function to merge two subarrays of arr[].
// First subarray is arr[low..mid], second subarray is arr[mid+1..high].
void merging(int arr[], int low, int mid, int high) {
    // Calculate sizes of two subarrays to be merged
    int n1 = mid - low + 1;
    int n2 = high - mid;

    // Create temporary arrays to hold the two subarrays
    int L[50];
    int R[50];

    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++) {
        L[i] = arr[low + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    // Merge the temporary arrays back into arr[low..high]

    // Initial index of first subarray
    int i = 0;

    // Initial index of second subarray
    int j = 0;

    // Initial index of merged subarray
    int k = low;

    // Compare elements from both subarrays and merge them in ascending order
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }


}

// Main function to perform merge sort on array arr[] from index low to high
void merge_sort(int arr[], int low, int high) {
    // Check if low is less than high, indicating more than one element in the array
    if (low < high) {
        // Find the middle point of the array
        int mid = (low + high) / 2;

        // Recursively sort the first and second halves
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);

        // Merge the sorted halves
        merging(arr, low, mid, high);
    }
}

// Main function to take user input, perform merge sort, and print the sorted array
int main() {
    // Declare an array to store input elements
    int arr[100];
    // Declare a variable to store the number of elements in the array
    int n;
printf("elemtent :");
    // Take input for the number of elements in the array
    scanf("%d", &n);

    // Take input for the elements of the array
    for (int i = 0; i < n; i++) {
printf("Enter number: ");
        scanf("%d", &arr[i]);
    }

    // Perform merge sort on the array
    merge_sort(arr, 0, n - 1);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        printf("%d  ", arr[i]);
    }

    return 0;
}
