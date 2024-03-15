//========================================================================
// selection-sort-int.c
//========================================================================
// Implementation of the selection sort function
//
//--------------------!!! IMPORTANT NOTE !!!------------------------------
//
// You need to use ece2400_malloc and ece2400_free in your implementation
// in order to get memory usage for eval!
//
//------------------------------------------------------------------------
//

#include "selection-sort-int.h"
#include <assert.h>

//------------------------------------------------------------------------
// find_min
//------------------------------------------------------------------------
// find the index of the minimum number in the array.

int find_min( int* x, int begin, int end )
{
  assert( begin < end );

  int current = x[begin];
  int index = begin;
  for(int i = begin; i < end; i++){
    if(current > x[i]){
      current = x[i];
      index = i;
    }
  }

  return index;
}

//------------------------------------------------------------------------
// selection_sort_int
//------------------------------------------------------------------------
// Sorts the array with selection sort

void selection_sort_int( int* x, int n )
{
  for(int i = 0; i<n-1; i++){
    int min_ind = find_min(x, i+1, n);
    if(x[i] > x[min_ind]){
      int temp = x[i];
      x[i] = x[min_ind];
      x[min_ind] = temp;
    }
  }
}

