/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */
//

static int position = 0;
static int Heap[100];
int HeapSize = sizeof(Heap);

/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */

int heapDelete()
{
  int val = Heap[1];         //Heap
  int x = Heap[HeapSize];    //last element in tree 'leaf'
  
  Heap[1] = Heap[HeapSize];    //Replace last element with Heap
  Heap[HeapSize] = val;        //Heap element with last element 'leaf'
  
  int i = 1;
  int j = 2 * i;

  int temp;
  
  while (j <= HeapSize-1){
    if (j < HeapSize-1 && Heap[j + 1] > Heap[j])
      j = j + 1;
    
    if (Heap[i] < Heap[j]){
      temp = Heap[i];
      Heap[i] = Heap[j];
      Heap[j] = temp;
      i = j;
      j = 2 * j;
    }else 
        break;
    }
    return val;
  }
        //A dummy return statement

/**
 *  addHeap(thing2add) adds the "thing2add" to the Heap.
 *
 */
void addHeap(int thing2add)
{
  Heap[position] = thing2add;
  position++;
}

/**
 * heapSize() returns the number of items in the Heap.
 *
 */
int heapSize()
{
  return sizeof(Heap);  //A dummy return statement
}
