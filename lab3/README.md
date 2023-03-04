Arshia Rahim - 500994106

InsertionSort
------------------------------------------------------------
./insertionSort 

	-	Fully functional, when prompted ./insertionSort < data.txt runs and works completely using metrics header and sort the numbers and output them in ascending order. UserInput also outputs in asending order.

	Analysis:

							Comparison     Swaps      Copys
	BestCase     ~ O(n),    	n,         0 swaps,    1 copys
	Average Case ~ O(n^2),      n(n-1)/2,  n(n-1)/2,   (n-1)
	Worst Case   ~ O(n^2),      n(n-1)/2,  n(n-1)/2,   (n-1)

	Procedure of insertionSort:
		- Start at index 1, check if the value on the left is greater than current index
		  if yes, swap the value else keep and check the next index.


MergeSort
------------------------------------------------------------
./mergeSort

	-	Fully functional, when ./mergeSort < data.txt runs and work completelly and runs the 
	    numbers in ascendion order as well as userInput it runs perfectly fine.

							       Comparison     Swaps      Copys
	BestCase     ~ O(nlogn),
	Average Case ~ O(nlogn),
	Worst Case   ~ O(nlogn),      (nlogn - n+1)

	Procedure of mergeSort:
		- Divide and conqure the array into small pieces and then compares the value and set them in right place in array in ascending order. 