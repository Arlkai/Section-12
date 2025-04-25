//Write a print function
    //Prints the result

//Write an apply all function named applyAll
    //-Expects two arrays of integers and their sizes and dynamically allocates a new array of integers whose size is the product of the 2 array sizes

/* Example
int array1 [] {1,2,3,4,5};
int array2 [] {10,20,30};

cout << "Array 1: ";
print(array1,5);

cout << "Array 2: ";
print(array2,3);

int *results = applyAll (array1,5,array2,3);
cout << "Result: ";
print(results, 15);

Output:
Array 1: [ 1 2 3 4 5 ]
Array 2: [ 10 20 30 ]
Result: [ 10 20 30 40 50 20 40 60 80 100 30 60 90 120 150 ]

Multiply the elements from array2 to each element of array1 - 10 multiplied by each element of array1 and then moves to the next element of array2

*/

#include <iostream>

using namespace std;

void print (int *results, size_t length) {
    cout << "[ ";
    for (int i {0}; i < length; i++) {
        cout << results[i] << " ";
    }
    cout << "]" << endl;
}

int *applyAll (int arr1[], size_t length1, int arr2[], size_t length2) {

    size_t threeLength {(length1 * length2)};
    int *tempResults = new int [threeLength];
    int counter {0};

    for (int i {0}; i < length2; i++) {
        for (int j {0}; j < length1; j++) {
            tempResults[counter] = arr1[j] * arr2[i];
            counter++;
        }
    }

    return tempResults;
}

int main () {

    int arrayOne [] {1,2,3,4,5};
    int arrayTwo [] {10,20,30};
    size_t lengthOne {sizeof(arrayOne) / sizeof(arrayOne[0])};
    size_t lengthTwo {sizeof(arrayTwo) / sizeof(arrayTwo[0])};
    size_t lengthTotal {(lengthOne * lengthTwo)};

    int *totalArray {nullptr};
    totalArray = applyAll(arrayOne, lengthOne, arrayTwo, lengthTwo);

    cout << "Array 1: ";
    print (arrayOne, lengthOne);
    cout << "Array 2: ";
    print (arrayTwo, lengthTwo);

    cout << "Result: ";
    print (totalArray, lengthTotal);

    delete [] totalArray;

    return 0;
}