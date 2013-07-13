#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

int main() {

    const int size = 500;

    cout<<"hi\n";

    int *array;
    array = new int[size];

    for(int i=0;i<=500;i++) {
        array[i] = i+10;
    }

    for(int i=0;i<=size;i++) cout<<array[i];

    delete[] array;
    cout<<"\nmemory cleared succesfuly";

    return 0;
}
