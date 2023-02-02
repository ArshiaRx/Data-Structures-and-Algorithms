#include <stdlib.h>
#include "towers.h"
#include <stdio.h>

int main(int argc, char **argv)
{
//argc - int number of argument
//**argv - position of each argument

    int n = 3;
    int from = 1;
    int dest = 2;

    if (argc > 4 || argc <= 0){
	fprintf(stderr, "Error, Number of argument exceeded");
	exit(1);
	}
    else if (argc == 4){
	
	//Setting the parameters to each argument
	n = atoi(argv[1]);        //atoi - convert String to input
	from = atoi(argv[2]);
	dest = atoi(argv[3]);

	//Should give error
	if (from == dest){
		fprintf(stderr, "Error! Origin and Destination cannot be the same.");
		exit(1);
	}
	else if (from > 3 || from < 1){
		fprintf(stderr, "Error! Starting tower cannot be greater than 3 or less than 1.");
		exit(1); 
    	}
	else if (dest > 3 || dest < 1){
		fprintf(stderr, "Error! Ending tower cannot be greater than 3 or less than 1.");
		exit(1);
	}
	
	else if(n < 0){
		fprintf(stderr, "Error! No Disk exists.");
		exit(1);
	}
	else {
		towers(n, from, dest);
		}
	}
	
    else if(argc == 3){
	fprintf(stderr, "Argument not satisfied, Results can not be formed");
	exit(1);
	}
	
    else if(argc == 2){
	n = atoi(argv[1]);    //Let n be the argument of the parameter such that 1 is the position
	if (n < 0){
		fprintf(stderr, "Error! No plate exists.");
		exit(1);
	}
	else {
		towers(n, from, dest);
		}
	}	
    else if (argc == 1){
	towers(n, from, dest);
	}   
    exit(0);
}
