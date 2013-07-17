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
    int sort_array(int *arr, int size_arr);
};

class bubble {
public:
    bubble();
    ~bubble();
    int bubble_method(int *arr, int size_arr);
};

/* //constructors/destructors
sort::sort() {

}

sort::~sort() {

}

bubble::bubble() {

}

bubble::~bubble() {

}
*/
int bubble::bubble_method(int *arr, int size_arr) {
    //insert function sort::sort_array(...)
    //need more information)
}

#endif // SORT_H
