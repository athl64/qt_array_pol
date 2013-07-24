#ifndef BUBBLE_H
#define BUBBLE_H

#include "sort.h"

class bubble : public ISort
{
public:
    bubble();
    virtual ~bubble();
    virtual int sort_array(int *arr, int size_arr);
};

#endif // BUBBLE_H
