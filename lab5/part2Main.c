#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern int isEmpty();
extern int heapSize();
extern int heapDelete();
extern void addHeap(int);

//prints the Heap in order
void printHeap(int Parent, int itemNum, int Heap[]){
  printf("<node id=\"%d\">", Heap[Parent]);     //Prints the Heap
  
  if (2 * Parent + 2 < itemNum){
    printHeap(2 * Parent + 1, itemNum, Heap);     //Calls the right child of the function if exist
    printf("</node>");
  }
}


int main(int argc, char * argv[])
{
  int value;
  int Heap[100];
  int itemNum = 0;
  while (scanf("%d\n", &value) != EOF) {
    fprintf(stderr, "READING INPUT: %d\n", value);
    //
    Heap[itemNum] = value;
    itemNum++;
  }
  for (int i = 1; i < itemNum; i++){
    int key = Heap[i];
    int j = i - 1;
    while (j >= 0 && Heap[j] < key){
      Heap[j + 1] = Heap[j];
      j = j - 1;
    }
    Heap[j + 1] = key;
  }
  for (int i = itemNum; i >= 0; i--)
    addHeap(Heap[i]);
    
  printf("Printing XML expression for the Heap: \n");
  printHeap(0, itemNum, Heap);
  printf("</>\n");

  printf("Printing forward sorted Heap: \n");
  for (int i = 0; i < itemNum; i++){
    int temp = heapDelete();
    printf("%d\n", temp);
    push(temp);
  }
    printf("Printing reverse sorted Heap: \n");
    for (int i = 0; i < itemNum; i++){
      printf("%d\n", pop());
    }
  exit(0);
}
