Q1- Suppose you were given an object module (with no access to source code) that    sorted an array of integers very efficiently.However, the sort function in
    the object module must be invoked with the following signature:

	betterSort(int data[], first, last);
    
where the array to sort is the data and the parameters first and last give
    the indices of the portion of the array that is to be sorted.

- How could you write a mySort() function with the signature used in the lab
  that could exploit the better sorting function in the supplied object module?
--------------------------------------------------------------------------------
Answer:
	There are many possible ways to write a mySort() function with the given parameters.
	
1st Possible way:

	- We take an array of integers in data, then we can set a for loop
	initializing the counter variable as the first integer and let it 
	loop until the last index integers while sorting and then
	print the data values in those index.
	
	Ex:
	
		for (int counter = first; first <= last; counter++){
		
			printf("Data: " + data[counter]);
		}


2nd Possible way:

	- We take an array of integers from data, then we can loop through 
	all the data element(if we want to find a specific element) and then
	set that specific index as our first index, then do for-loop until
	the last given index value and do the the sorting from the first to
	the last of the for-loop.

3rd Possible way:

	- we can use a parameter of length which is the number of element of
	the data arraylist in order to betterSort the function. Then we can 
	call the betterSort function and give the data as an input parameter
	and set the first parameter to 0 and last to (length-1) for the
	last parameter. This way we can invoke betterSort() function within
	mySort() function.

