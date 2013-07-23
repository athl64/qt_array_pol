#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "bubble.h"

sort::sort() {

}

sort::~sort() {

}

int sort::sort_array(int *arr, int size_arr) {//simple sort method
    int temp,n,m;
    for(n=0;n<=size_arr;n++) {
        for(m=0;m<size_arr;m++) {
            if(arr[m]>arr[m+1]) {
                temp=arr[m+1];
                arr[m+1]=arr[m];
                arr[m]=temp;
            }
        }
    }
    return 0;
}
