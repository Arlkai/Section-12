#include <iostream>

using namespace std;

int main () {

    int scores[] {100,95,89};

    cout << "Value of Scores: " << scores << endl;

    int *scorePointer {scores};
    cout << "Value of scorePointer: " << scorePointer << endl;

    cout << "\nArray Subscript Notation:" << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;

    cout << "\nPointer Subscript Notation:" << endl;
    cout << scorePointer[0] << endl;
    cout << scorePointer[1] << endl;
    cout << scorePointer[2] << endl;

    cout << "\nPointer Offset Notation:" << endl;
    cout << *scorePointer << endl;
    cout << *(scorePointer + 1) << endl;
    cout << *(scorePointer + 2) << endl;

    cout << "\nArray Offset Notation:" << endl;
    cout << *scores << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;

    return 0;
}