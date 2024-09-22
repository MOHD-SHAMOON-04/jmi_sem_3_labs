// Practise Questions : (try yourself)
// Q1: Array Initialization: Write a C program to declare and initialize a 1D array of 10 integers. Display the elements of the array using a for loop.

// Q2: Sum of Array Elements: Write a C program to find the sum of all elements of an integer array. The array should be of size 5, and values should be provided by the user.

// Q3: Find Maximum Element: Write a C program to find the maximum value in a 1D array of 10 integers entered by the user.

// Q4: Reversing the Array: Write a C program that takes an array of 5 integers as input and then displays the array in reverse order.

// Q5: Even and Odd Count: Write a C program to count the number of even and odd numbers in a 1D array of 10 integers.

// Q6: Array Element Search: Write a C program that accepts an array of 10 integers and a target number. Search for the target number in the array and print its index if found. If not found, print a message indicating so.

// Q7: Copy Array Elements: Write a C program to copy all elements from one array to another. Both arrays should have 10 elements, and the values should be provided by the user.

// Q8: Average of Array Elements: Write a C program to calculate the average of elements in an array of size 5. Input should be taken from the user.

// Q9: Sorting an Array: Write a C program to sort an array of 10 integers in ascending order using the bubble sort algorithm.

// Q10: Array Element Frequency: Write a C program to find the frequency of each element in a 1D array. Assume that the array contains 10 integers, and some values may repeat.

// Theory Questions :
// Q1 : What are arrays?
// A1 : In C, an array is a collection of elements of the same type stored
//      in contiguous memory locations.

// Q2 : Adavantages of Arrays
// A2 : The organization of data in contiguous memory locations allows
//      efficient access to elements using their index.

// Q3 : What are 1-Dimentional Arrays?
// A3 : A one-dimensional array can be viewed as a linear sequence of elements.
//      We can only increase or decrease its size in a single direction.
//      Only a single row exists in the one-dimensional array and every
//      element within the array is accessible by the index.
//      In C, array indexing starts zero-indexing i.e. the first element is at index 0,
//      the second at index 1, and so on up to n-1 for an array of size n.

// THEORY :
// Syntax :
// elements_type  array_name[array_size];
// ex :
int Arr[10];                 // declareation only
char Str[32];                // declareation only
int A[] = {11, 3, 55, 7, 9}; // declareation + initialization
// (note1 : Here you can omit the array_size, and initialise without it)
// (note2 : This initialization only works when performed with declaration.)

int B[10] = {1, 3, 5, 7};    // declareation + initialization
// (note here if you initialised only some of the elements,
//  then the rest of the elements will be initialised by 0), i.e.
// array B will look like this -> ```B[10] = {1,3,5,7,0,0,0,0,0,0}```

// some IMP points
// -> array_name[index];        // accessing the element
// -> array_name [index] = new_value;       // updating element
// Note: Make sure the index lies within the array or else it might lead to segmentation fault.

// Memory Representation
// Address of ith element = base + (i x width)
//                                      width = size of one element of the array
// Note: The name of the array is the pointer to its first element.
//       And also, we don’t need to multipy the size of the data type.
//       The compiler already do it for you.

//-------------------------------------------------------------------------//
// Array of Characters (Strings) : in C, The strings are essentially an array of character
//                                 that is terminated by a NULL character (‘\0’).

// Syntax :
// char char_array_name[] = "data_stored_in_the_string";
// ex :
char name[] = "print hello";
// It is same as
char name[] = {'p','r','i','n','t',' ','h','e','l','l','o','\0'};
// To print it : ```printf("%s", name);```