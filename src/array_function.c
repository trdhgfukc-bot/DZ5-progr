#include "../include/array_function.h"
#include <stdio.h>
#include <stdlib.h>

void get_min_and_max_from_int_array(int* src, size_t size, int* min, int* max) {
    int timemin = 99999999;
    int timemax = 0;
    for (int i = 0; i < size; ++i){
        if (src[i] > timemax) {
            timemax = src[i];
        }
        if (src[i] < timemin) {
            timemin = src[i];   
        }
    }
    min = &timemin;
    max = &timemax;

}
