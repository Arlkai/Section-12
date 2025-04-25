#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {

    /*//Integers

    int score {100};
    int *scorePointer {&score}; //* declares the variable as a pointer and initializing it to &score stores the memory address of score

    cout << *scorePointer << endl; //Using *, that dereferences the pointer

    *scorePointer = 200; //* Used as an assignment statement
    cout << *scorePointer << endl;
    cout << score << endl;*/


    /*//Doubles

    double highTemperature {100.7};
    double lowTemperature {37.4};
    double *tempPointer {&highTemperature};

    cout << *tempPointer << endl;

    tempPointer = &lowTemperature;

    cout << *tempPointer << endl;*/

    /* //Strings

    string name {"Anthony"};

    string *stringPointer {nullptr};
    stringPointer = &name;

    cout << *stringPointer << endl;

    name = "Emma";

    cout << *stringPointer << endl; */

    /*double highTemperature {100.7};
    double lowTemperature {37.4};
    double *tempPointer {&highTemperature};

    cout << *tempPointer << endl;
    tempPointer = &lowTemperature;
    cout << *tempPointer << endl;*/


    vector <string> familyNames {"Anthony", "Emma", "Kylo"};
    vector<string> *vectorPointer {nullptr};

    vectorPointer = &familyNames;

    cout << "1: " << (*vectorPointer).at(0) << endl;

    cout << "Names: ";
    for (auto names: *vectorPointer) {
        cout << names << " ";
    }
    cout << endl;

    familyNames.push_back("Captain");

    cout << "\nAdded Names: ";
    for (auto names: *vectorPointer) {
        cout << names << " ";
    }

    cout << endl;

    return 0;
}