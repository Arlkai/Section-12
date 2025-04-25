#include <iostream>
#include <string>

using namespace std;

int main () {

    int scores[] {100, 95, 89, 68, -1};
    int *scoresPointer {scores};

    while (*scoresPointer != -1) {
        cout << *scoresPointer << endl;
        scoresPointer++;
    }

    cout << "\n---------------------" << endl << endl;
    scoresPointer = scores;

    while (*scoresPointer != -1) {
        cout << *scoresPointer++ << endl;
    }

    cout << "\n---------------------" << endl << endl;

    string s1 {"Anthony"};
    string s2 {"Anthony"};
    string s3 {"Emma"};

    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};

    cout << boolalpha;
    cout << p1 << " == " << p2 << ": " << (p1 == p2) << endl;
    cout << p1 << " == " << p3 << ": " << (p1 == p3) << endl;

    cout << *p1 << " == " << *p2 << ": " << (*p1 == *p2) << endl;
    cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << endl;

    p3 = &s3;
    cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << endl;

    cout << "\n---------------------" << endl << endl;
    
    char name[] {"Anthony"};

    char *charPointer {nullptr};
    char *charPointer2 {nullptr};

    charPointer = &name[0];
    charPointer2 = &name[3];

    cout << "In the string " << name << ", " << *charPointer2 << " is " << (charPointer2 - charPointer) << " characters away from " << *charPointer << endl;

    return 0;
}