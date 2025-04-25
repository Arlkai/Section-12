#include <iostream>

using namespace std;

int *largestInt (int *intPointer1, int *intPointer2) {
    if (*intPointer1 > *intPointer2) {
        return intPointer1;
    }
    else
        return intPointer2;
}

int *createArray (size_t size, int initialValue = 0) {
    int *newStorage {nullptr};

    newStorage = new int [size];
    for (size_t i {0}; i < size; ++i) {
        *(newStorage + i) = initialValue;
    }
    return newStorage;
}

void display (const int *const array, size_t size) {
    for (size_t i{0}; i < size; ++i) {
        cout << array[i] << " " << endl;
    }
}

int main () {

    /*int a {200};
    int b {100};

    int *largestPointer {nullptr};

    largestPointer = largestInt (&a, &b);
    cout << *largestPointer << endl;*/

    int *myArray {nullptr};
    size_t size;
    int initialValue {};

    cout << "\nHow many integers would you like to allocate?: ";
    cin >> size;
    cout << "What value would you like them initialized to?: ";
    cin >> initialValue;

    myArray = createArray (size, initialValue);

    display(myArray, size);
    delete [] myArray;

    return 0;
}