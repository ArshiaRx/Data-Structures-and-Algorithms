#include "mySort.h"
//#include "metrics.h"

/*void mySort(int array[], unsigned int first, unsigned int last)
    {
        //InsertionSort
        
        array = [5, 2, 4, 1, 6, 3]

        check within an array, if next index is bigger than current index then swap
        
       //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
        int key, i;

        //if array.size() == 0 return  
        for (int j = 2; j < last + 1; j++){
            myCopy(&array[j], &key);
            //key = array[j];
            i = j - 1;
            
            while (i > 0 && myCompare(array[i], key) >= 0){
                mySwap(&array[i], &array[i+1]);
                i = i - 1;
            }
            //array[i+1] = key;

            //if (key == array[last+1]){
            //    break;
            //}
        }
        //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    }
*/
#include "mySort.h"
void mySort(int array[], int first, int last){
     int i,j,temp;
    first++;
    for(i=first;i<=last;i++){
        myCopy( &array[i],&temp);
        j=i-1;
        while(myCompare(temp,array[j])<0 && myCompare(-1,j)<0){
            myCopy(&array[j],&array[j+1]);
            j=j-1;
        }
        myCopy(&temp,&array[j+1]);
    }
}