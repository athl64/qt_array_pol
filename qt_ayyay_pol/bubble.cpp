#include "bubble.h"

bubble::bubble()
{
}

bubble::~bubble()
{
}

int bubble::sort_array(int *arr, int size_arr)
{
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
