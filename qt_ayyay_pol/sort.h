#ifndef SORT_H
#define SORT_H

class ISort {
private:
    int n;
public:
    ISort();
    virtual ~ISort();
    virtual int sort_array(int *arr, int size_arr) = 0;
};


#endif // SORT_H
