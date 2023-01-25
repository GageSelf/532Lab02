#include <stdio.h>

void insertionSort(int arr[], int len){
    int temp, current;
    for(int i = 1; i < len; i++){
        current = i;
        while(current > 0 && arr[current - 1] > arr[current]){
            temp = arr[current];
            arr[current] = arr[current - 1];
            arr[current - 1] = temp;
            current--;
        }
    }
}

int main(){
    int len;

    printf("Please enter the number of array elements: ");
    scanf("%d", &len);
    int arr[len];

    for(int i = 0; i < len; i++){
        printf("Please enter element %d of array; ", i+1);
        scanf("%d", &arr[i]");
    }

    int j = 0;
    printf("Given array is: [");
    while(j < (len - 1)){
        printf("%d, ", arr[j]);
        j++;
    }
    printf("%d]\n", arr[len - 1]);

    insertionSort(arr, len);

    j = 0;
    printf("Sorted array is: [");
    while(j < (len - 1)){
        printf("%d, ", arr[j]);
        j++;
    }
    printf("%d]\n", arr[len - 1]);

    return 0;
}
