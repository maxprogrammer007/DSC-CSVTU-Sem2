//
// Created by Administrator on 11-Apr-24.
//

#include<stdio.h>
int main(void){
    int a[] = {5, 2, 4, 6, 1, 3};
    int n = 6;
    int i, j, temp;

    for(i = 0; i < n; i++){
        for(j = 0; j < n - i - 1; j++){
            if(a[j] > a[j + 1]){
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}