#include <stdio.h>

void merging(int arr[], int low, int mid, int high){
    int n1 = mid-low+1;
    int n2 = high-mid;

    int L[50];
    int R[50];

    for(int i=0; i<n1; i++){
        L[i] = arr[low+i];
    }

    for(int i=0; i<n2; i++){
        R[i] = arr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=low;

    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k] = L[i];
            i++;
            k++;
        }
        else{
           arr[k] = R[j];
           j++;
           k++;
        }
    }

    while(i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int low, int high){
    if(low < high){
        int mid = (low+high)/2;

        merge_sort(arr, low, mid);
        merge_sort(arr, mid+1, high);
        merging(arr, low, mid, high);
    }
}

int main(){
    int arr[100];
    int n;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    merge_sort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        printf("%d  ", arr[i]);
    }

    return 0;
}
