Questions

Suppose that towers(5, 2, 3) is invoked.

1. How will the first recursive call to towers() be invoked? Answer this question in the form:         towers(x, y, z) where you give the actual values to the three parameters.

2. How many recursive calls to towers() will be made before this first recursive call actually         returns to the initial invocation?

3. Once towers(5, 2, 3) has invoked its first recursive call to towers() and this invocation   
   has returned, what will be printed to stdout? (i.e. What actual move will be made by 
   towers(5, 2, 3) ?)
 
4. How will the second recursive call to towers() be invoked? Answer this question in the form:        towers(x, y, z) where you give the actual values to the three parameters.

ii. Suppose that towers(8, 1, 2) is invoked. How many lines will be printed to stdout?

===============================================================================================

Answers:

Q1. The first recursive call to towers(x, y, z) will be invoked with parameter as such:

    towers(4,2,1)

Q2. 31 recursive calls to tower() will be made before coming to first initial recursive call. 

Q3. Move #7

Q4. The second recursive call to towers(x, y, z) will be invoked with parameter as such: 

    towers(3,2,3) 

ii. if towers(8, 1, 2) is invoked. The number of lines will be printed to stdout is 255.

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Overview Summary:
	
In this lab, I successfully implemented some changes to the towersMain() function in such way

that accomedate different specific argument, that are as such. Take no argument, which prints

the towers.c, Take one argument which is the number of disks/plate, or 

three argument(numberOfDisk, from, destination) while none of these argument satisfies it gives

an error and while the parameters dont satisfy as specified it runs error or else it runs fine.

Note that the range of from and destination can be less than 1 or greater than 3 or equal or else

it gives error.
