#include <iostream>
#include <string>

using namespace std;

int main () {

    /*Exercise One
    int numOne {};
    int numTwo {};

    cout << "Enter the value of numOne: ";
    cin >> numOne;
    cout << "Enter the value of numTwo: ";
    cin >> numTwo;

    int *pNumOne {&numOne};
    int *pNumTwo {&numTwo};

    cout << "Pointer numOne: " << *pNumOne << endl;
    cout << "Pointer numTwo: " << *pNumTwo << endl;*/

    /*Exercise Two
    int size {};
    cout << "How big would like the array to be from 1-10: ";
    cin >> size;
    int nums [size];

    int *maxValue {nums};

    for (int i {0}; i < size; i++) {
        cout << "What would you like the value of element " << i << " to be: ";
        cin >> nums[i];
        if (nums[i] > *maxValue) {
            *maxValue = nums[i];
        }
    }

    cout << "The largest value in the array is: " << *maxValue << endl;*/

    /*Exercise Three
    string name {};
    cout << "What is your name?: ";
    getline (cin, name);

    string *pName {&name};
    cout << "Pointer Name: " << *pName << endl;*/

    //Exercise Four
    int size {};
    cout << "How many characters are in your name?: ";
    cin >> size;

    char name[size] {};
    cout << "Enter your name: ";
    cin >> name;

    char *pName {name};
    cout << "First Letter: " << *pName << endl;
    cout << "Third Letter: " << *(pName + 2) << endl;

    return 0;
}