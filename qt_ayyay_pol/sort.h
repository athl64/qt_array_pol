#ifndef SORT_H
#define SORT_H
#include "conio.h"
#include "iostream"

using namespace std;

class sort {
private:
    int n;
public:
    sort(int *array);
    ~sort();
};

sort::sort(int *array) {
    cout<<"\nstarted sorting\n";
}

sort::~sort() {
    cout<<"\n destroyed\n";
}

#endif // SORT_H
