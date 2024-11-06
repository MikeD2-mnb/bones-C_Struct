As arrays in C need to be fixed in length before compile time, unlike in python, where variable length arrays can be used, I found the solution to this problem ws to declare a stucture.
So if you declare a structure with arrays, then you can use an array of structures - the number of which can be changed by changing a single constant. you can then itterate through the array of structures and the structur's arrays.

