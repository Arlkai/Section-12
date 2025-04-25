#include <iostream>

using namespace std;

int main () {

    /*int *integerPointer {nullptr};

    integerPointer = new int;

    cout << integerPointer << endl; //Shows the memory address
    cout << *integerPointer << endl; //Since the new int variable was not initialized it contains bad data

    *integerPointer = 100;

    cout << *integerPointer << endl;*/

    /*int *arrayPointer {nullptr};
    int size {};

    cout << "How big do you want the array?: ";
    cin >> size;

    arrayPointer = new int[size];*/

    /*int *intPointer {nullptr};
    
    intPointer = new int;

    cout << intPointer << endl;

    delete intPointer;*/

    size_t size {0};
    double *tempPointer {nullptr};

    cout << "How many temps? ";
    cin >> size;

    tempPointer = new double[size];

    cout << tempPointer << endl;

    delete [] tempPointer;

    

    return 0;
}