//
// Created by Administrator on 11-Apr-24.
//
#include<stdio.h>

int main(void){
    int a[] = {5, 2, 4, 6, 1, 3};
    int n = 6;
    int i, j, key;

    for(i = 1; i < n; i++){
        key = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > key){
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }

    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}