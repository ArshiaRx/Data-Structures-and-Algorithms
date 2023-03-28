/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */

//

int HeapSize;

/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */

int heapDelete()
{
  int biggestInt;
   int A[HeapSize];

  //Number of value in heap
  for (int i = 0; i <= HeapSize; i++){
    if (A[i+1] > A[i]){
    biggestInt = A[i+1];
    }
    else {
      biggestInt = A[i];
    }
  }
  
  return biggestInt;  //A dummy return statement
}

/**
 *  addHeap(thing2add) adds the "thing2add" to the Heap.
 *
 */
void addHeap(int thing2add)
{
}

/**
 * heapSize() returns the number of items in the Heap.
 *
 */
int heapSize()
{
  return 0;  //A dummy return statement
}
