#include <stdio.h>
#include <stdlib.h>
#include "mySort.h"

int main(int argc, char * argv[])
{
    int data[100000]; /* Array of ints to sort */
 
    int nDataItems;   /* number of actual items in the array */
 
    int i;
 

	if (argc > 1){
	
		nDataItems = argc;

		for (int i = 0; i < nDataItems; i++){
			data[i] = atoi(argv[i]);	//Convert String array argument to int		
		}
		
		mySort(data, nDataItems);

		printf("User Input has been Sorted and it's being Printed: \n");

    		/* Print sorted array to stdout */
    		for(i = 1; i < nDataItems; i++) {

       			 printf("%d\n", data[i]);

    		}
 	   exit(0);
	}
else {
	nDataItems = 4;
	int temp;
		
	/* TestData */	
	data[0] = 10;

	data[1] = 20;

	data[2] = 30;

	data[3] = 40;

	mySort(data, nDataItems);
	
		
	printf("Hard coded array has been sorted and it's being Printed: \n");
 	
	for (i = 0; i <= nDataItems-1 ; i++){
		printf("%d\n", data[i]);
    	}	
	exit(0);
	}	
}
