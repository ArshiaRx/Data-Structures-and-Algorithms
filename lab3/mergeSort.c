#include "mySort.h"
void MergeSort(int array[], int first, int middle, int last){

    int i, j, k;
    
    int L_array = middle - first + 1;     //left array
    int R_array = last - middle;          //right array

    int array1[L_array], array2[R_array];

    //first to end of the left array
    for ( i = 0; i < L_array; i++){
        myCopy(&array[first + i], &array1[i]);
    }

    //middle to the end of the right array
    for( j = 0; j < R_array; j++){
        myCopy(&array[middle + 1 + j], &array2[j]);
    }

    //reset the values
    i = 0;
    j = 0;
    k = first;

    //while both right & left index less than the array
    while(i < L_array && j < R_array){
        if (myCompare(array1[i], array2[j]) <= 0){
            
            myCopy(&array1[i], &array[k]);
            i++;
        }
    else {
        myCopy(&array2[j], &array[k]);
        j++;
    }
    k++;
    }

    //sort leftArray
    while(i < L_array){

        myCopy(&array1[i], &array[k]);
        
        i++;  //index of leftArray
        k++;
    }

    //sort rightArray
    while(j < R_array){

        myCopy(&array2[j], &array[k]);

        j++;
        k++;
    }
}

//mySort
//Procedure:
//      - Divide and conqure into two pieces and sort the two splitted array and merge them once they sorted

void mySort(int array[], unsigned int first,unsigned int last){
    //split the array and sort left and right array then combine them

    if (first < last){
        int middle = first + (last - first)/2;
        
        //Right array
        mySort(array, first, middle);
        
        //Left array
        mySort(array, middle + 1, last);
        
        //Merge the two sorted arrays
        MergeSort(array, first, middle, last);
    }
}
