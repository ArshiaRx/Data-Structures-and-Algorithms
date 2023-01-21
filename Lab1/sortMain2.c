#include <stdio.h>
#include <stdlib.h>
#include "mySort.h"

int main(int argc, char * argv[])
{
int data[100000]; /* Array of ints to sort */
 
    int nDataItems;   /* number of actual items in the array */
 
    int i;
  
   //argc is int and stores number when command line arguments is passed by user
    if (argc > 1){
	nDataItems  = argc - 1;
	
	for (int count; count < argc; count++){

		//atoi - Converts String to Integers
		data[count - 1] = atoi(argv[count]);
	}
    }
    else {
	
    	/* Test data */
 
    	nDataItems = 5;
        //data [] = [3, 4, 6, 9, 5];
    	data[0] = 3;
 
    	data[1] = 4;
 
    	data[2] = 6;
 
    	data[3] = 9;

    	data[4] = 5;

	}
    mySort(data, nDataItems);
  
    /* Check that the data array is sorted. **/

    for(i = 0; i < nDataItems-1; i++) {
 
        if (data[i] > data[i+1]) {
 
            fprintf(stderr, "Sort error: data[%d] (= %d)"
 
              " should be <= data[%d] (= %d)- -aborting\n",
 
              i, data[i], i+1, data[i+1]);
 
            exit(1);
 
        }
 
    }
 
    
 
    /* Print sorted array to stdout */
 
    for(i = 0; i < nDataItems; i++) {
 
        printf("%d\n", data[i]);
 
    }
 
    exit(0);
}
