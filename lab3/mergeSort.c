/*#include "mySort.h"

void mySort(int array[], unsigned int first, unsigned int last)
    {
    }*/
#include "mySort.h"
void mergemySort(int array[], int first, int middle, int last){
    int i, j, k;
    int L_array = middle - first + 1;     //left array
    int R_array = last - middle;          //right array
    int array1[L_array], array2[R_array];

    for ( i = 0; i < L_array; i++){
        myCopy(&array[first + i], &array1[i]);
    }

    for( j = 0; j < R_array; j++){
        myCopy(&array[middle + 1 + j], &array2[j]);
    }

    i =0;
    j=0;
    k=first;
    while(i < L_array && j < R_array){
        if(myCompare(array1[i], array2[j]) <= 0){
            myCopy(&array1[i], &array[k]);
            i++;
        }
    else {
        myCopy(&array2[j],&array[k]);
        j++;
    }
    k++;
    }

    //sort leftArray
    while(i < L_array){
        myCopy(&array1[i], &array[k]);
        i++;
        k++;
    }

    //sort rightArray
    while(j < R_array){
        myCopy(&array2[j],&array[k]);
        j++;
        k++;
    }
}

//mySort
void mySort(int array[], int first, int last){
    //split the array and sort left and right array then combine them

    if (first < last){
        int middle = first + (last - first)/2;
        
        //Right array
        mySort(array, first, middle);
        
        //Left array
        mySort(array, middle + 1, last);
        
        mergemySort(array, first, middle, last);
    }
}
