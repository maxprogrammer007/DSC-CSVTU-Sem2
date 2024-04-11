//
// Created by Administrator on 11-Apr-24.
//
#include<stdio.h>

void heapify(int a[], int n, int i){
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int temp;

    if(left < n && a[left] > a[largest]){
        largest = left;
    }

    if(right < n && a[right] > a[largest]){
        largest = right;
    }

    if(largest != i){
        temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        heapify(a, n, largest);
    }
}

void heap_sort(int a[], int n){
    int i, temp;

    for(i = n / 2 - 1; i >= 0; i--){
        heapify(a, n, i);
    }

    for(i = n - 1; i >= 0; i--){
        temp = a[0];
        a[0] = a[i];
        a[i] = temp;
        heapify(a, i, 0);
    }
}

int main(void){
    int a[] = {5, 2, 4, 6, 1, 3};
    int n = 6;
    int i;

    heap_sort(a, n);

    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}