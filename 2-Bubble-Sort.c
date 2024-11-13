#include<stdio.h>

int bubbleSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = temp;
            }
        }
    }

}

int main(){
    int arr[] = {45, 24, 12, 14, 26, 78};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: ");
    for(int i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
}
