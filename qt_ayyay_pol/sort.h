#ifndef SORT_H
#define SORT_H
#include "conio.h"
#include "iostream"
#include <cstdlib>

using namespace std;

class sort {
private:
    int n;
public:
    sort();
    ~sort();
    int sort_array(int *arr);
};

sort::sort() {
    cout<<"\nstarted sorting\n";
}

sort::~sort() {
    cout<<"\n destroyed\n";
}

#endif // SORT_H
