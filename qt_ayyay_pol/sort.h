#ifndef SORT_H
#define SORT_H
#include "conio.h"
#include "iostream"

using namespace std;

class sort {
private:
    int n;
public:
    //Need only default constructor without parameters.
    sort(int *array);
    //Need virtual function for sorting.
    //Destructor should be virtual too !!!
    ~sort();
};
//It's dosn't need
//-----------------------------------
sort::sort(int *array) {
    cout<<"\nstarted sorting\n";
}

sort::~sort() {
    cout<<"\n destroyed\n";
}
//-----------------------------------
#endif // SORT_H
