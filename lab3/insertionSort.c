#include "mySort.h"
#include "metrics.h"

//InsertionSort
//Procedure:(
//      - Starts at the first index keep checking the next value if greater than current then swap the value
//        and set them in an ascending order

void mySort(int array[], unsigned int first, unsigned int last){
    int key;

    for (int j = first+1; j <= last; j++){
        //key = array[j];
        myCopy(&array[j], &key);     //copy value of array[i] to key
        int i = j - 1;

        while(i >= 0 && array[i] > key){
        //myCompare(array[j], key) >= 0)
            //array[i + 1] = array[i];
            mySwap(&array[i], &array[i + 1]);
            i--; // i = i-1;
        }
        array[i + 1] = key;
    }
}
    /*{
        //InsertionSort

        int key, i;
 
        for (int j = 2; j < last + 1; j++){
            myCopy(&array[j], &key);
            //key = array[j];
            i = j - 1;
            
            while (i > 0 && myCompare(array[i], key) >= 0){
                mySwap(&array[i], &array[i+1]);
                i = i - 1;
            }
            //array[i+1] = key;
        }
    }
*/
