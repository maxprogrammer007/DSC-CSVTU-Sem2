//
// Created by Administrator on 11-Apr-24.
//
#include <stdio.h>

int main(void){
    int a[] = {5, 2, 4, 6, 1, 3};
    int n = 6;
    int i, j, temp, min;

    for(i = 0; i < n - 1; i++){
        min = a[i];
        for(j = i + 1; j < n; j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}