//
// Created by Administrator on 16-Apr-24.
//

#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int low, int high){
    int pivot = a[high];
    int i = low - 1;
    int j;

    for(j = low; j <= high - 1; j++){
        if(a[j] < pivot){
            i++;
            swap(&a[i], &a[j]);
        }
    }

    swap(&a[i + 1], &a[high]);

    return i + 1;
}

void quick_sort(int a[], int low, int high){
    if(low < high){
        int pi = partition(a, low, high);

        quick_sort(a, low, pi - 1);
        quick_sort(a, pi + 1, high);
    }
}

int main(void){
    int a[] = {5, 2, 4, 6, 1, 3};
    int n = 6;
    int i;

    quick_sort(a, 0, n - 1);

    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}