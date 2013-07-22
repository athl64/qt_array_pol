#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
#include "bubble.h"


using namespace std;

int main() {

    const int size = 500;

    cout<<"hi\n";

    int *array;
    array = new int[size];

    for(int i=0;i<=500;i++) {
        array[i] = rand() %100;
    }

    for(int i=0;i<=size;i++) cout<<array[i]<<" ";//fill array with random numbers

    cout<<"\nspace between output\n";

    // using of class bubble
    sort g;
    g.sort_array(array,size);
    // using of class bubble
    for(int i=0;i<=size;i++) cout<<array[i]<<" ";

    delete[] array;
    cout<<"\nmemory cleared succesfuly";

    return 0;
}

int bubble::bubble_method(int *arr, int size_arr) {
    //return sort::sort_array(&arr,size_arr);//         <-this shit doesn't work
    return 0;
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

sort::sort() {

}

sort::~sort() {

}
