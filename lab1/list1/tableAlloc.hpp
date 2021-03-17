//
//  assigment1.hpp


#ifndef tableAlloc_hpp
#define tableAlloc_hpp

#include <stdio.h>

void v_alloc_table_add_5(int iSize);
bool b_alloc_table_2_dim(int **piTable, int iSizeX, int iSizeY);

void print_tab(int **piTable, int iSizeX, int iSizeY);
bool b_dealloc_table_2_dim(int **piTable, int iSizeX, int iSizeY);

void showArray(int *array, int size);

int *v_alloc(int size);
bool v_alloc2(int **ptr, int size);
void de_alloc(int **ptr);

#endif /* tableAlloc_hpp */
