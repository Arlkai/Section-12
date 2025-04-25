#include <iostream>
#include <string>
#include <vector>

using namespace std;

void doubleData (int *intPointer) {
    *intPointer *= 2;
}

void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display (vector<string> *v) {
    for (auto str: *v) {
        cout << str << endl;
    }
    cout << endl;
}

void display (int *array, int sentinel) {
    while (*array != sentinel) {
        cout << *array++ << endl;
    }
    cout << endl;
}

int main () {

    /*int value {10};
    int *intPointer {nullptr};

    cout << "Value: " << value << endl;
    doubleData(&value);
    cout << "Value: " << value << endl;

    cout << "---------" << endl;
    intPointer = &value;

    doubleData(intPointer);
    cout << "Value: " << value << endl << endl;*/

    /*int x {100};
    int y {200};
    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl;

    swap(&x, &y);

    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl << endl;*/

    /*cout << "------------------------------" << endl;
    vector<string> family {"Anthony", "Emma", "Kylo"};
    display(&family);*/

    int scores [] {100, 98, 97, 79, 85, -1};
    display(scores, -1);

    return 0;
}