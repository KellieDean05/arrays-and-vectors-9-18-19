/*
Kellie Henderson, Dr_T, 9-18-19, COSC 1436-57005
working with arrays and vectors.
*/
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
using namespace std;
void printArray(int[], int); // pass array as a parameter, and it's size.
void sortArrAsc(int[], int);
void inputArrData(int[], int);
void sortArrDesc (int[], int);

int main()
{
  // an array called "numbers"

int numbers[8] = {23, 46, 12, 24, 1}; // put 5 values of 8 in an array.

// in the sixth element of the numbers array add the number 500.
numbers[5]= 500;
// add the numbers 1,000 and 89 to the next available element.
numbers [6] = 1000;
numbers [7] = 89;
// get the size of numbers
int numbers_array_size = sizeof(numbers) / sizeof(int);

cout << "\nNumbers [] array has " << numbers_array_size << " values:\n" ;


// print the current values in the numbers_array.
printArray(numbers,numbers_array_size);
cout << "\n" <<  endl;
sortArrAsc(numbers,numbers_array_size);
cout << "\n" << endl;
sortArrDesc(numbers,numbers_array_size);
inputArrData(numbers,numbers_array_size);



    return 0;
}

void printArray(int array[], int size)
{
  cout << "Printed Values: " << endl;
// print the array values, 1 per line.
for (int i = 0; i < size; i++)
cout << array[i] << endl;
}


// sort the Array in ascending order.
void sortArrAsc(int array[],int size)
{
int temp = 0; // needed for swap process..
for(int left = 0; left < size; left++)// we are the number on the left. right and left index.
  {
    //we are the number on the right. 
    for(int right = left +1; right < size; right ++)
    {
    // the swap magic happens here. 
    //Compare the left num to the right num. Swap if necessary.
      if (array[left] > array[right])// hint > is ASC, < is DESC
      {
        temp = array[left];
        array[left] = array[right];
        array[right] = temp;

      }

    }

  }

printArray(array, size); // print the list after sorting the list.
}

void sortArrDesc(int array[],int size)
{
int temp = 0; // needed for swap process..
for(int left = 0; left < size; left++)// we are the number on the left. right and left index.
  {
    //we are the number on the right. 
    for(int right = left +1; right < size; right ++)
    {
    // the swap magic happens here. 
    //Compare the left num to the right num. Swap if necessary.
      if (array[left] < array[right])// hint > is ASC, < is DESC
      {
        temp = array[left];
        array[left] = array[right];
        array[right] = temp;

      }

    }

  }

printArray(array, size); // print the list after sorting the list.
}
void inputArrData(int array[], int size)
{
  //accept validated input into the array "size" values
  // sort that array ASC
  // print the latest values in sorted order.
  int input = 0;
  for(int i=0; i < size; i++)
  {
    cout << "\nPlease input number: " << i+1 << " of " << size << "." << endl;
    input = validateInt(input);
    array[i]=input; // store the validated values into the array.
  }
sortArrAsc(array, size);// 2 & 3
sortArrDesc(array, size);
} 
