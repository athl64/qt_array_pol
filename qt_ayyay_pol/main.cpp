//#include <conio.h>
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
    ISort *g = new bubble();
    g->sort_array(array,size);
    // using of class bubble
    for(int i=0;i<=size;i++) cout<<array[i]<<" ";

    delete[] array;
    delete g;
    cout<<"\nmemory cleared succesfuly";

    return 0;
}
