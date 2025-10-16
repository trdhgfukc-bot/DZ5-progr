#include "../include/array_function.h"
#include <stdio.h>
#include <stdlib.h>

void join_int_arrays(int *src1, size_t size_src1, int *src2, size_t size_src2, int *dest) {
    for (int i = 0; i<size_src1; ++i){
        dest[i] = src1[i];
    }
    for (int i = size_src1; i < size_src1+size_src2; ++i){
        dest[i]=src2[i-size_src1];
    }
}
