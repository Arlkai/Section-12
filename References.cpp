#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {

    /*int num {100};
    int &ref {num};

    cout << num << endl;
    cout << ref << endl;

    num = 200;
    cout << endl << num << endl;
    cout << ref << endl;

    ref = 300;
    cout << endl << num << endl;
    cout << ref << endl;*/

    cout << endl;
    vector <string> family {"Anthony", "Emma", "Kylo"};

    for (auto str: family) {
        str = "Funny";  //Doesn't change each element of the vector to "Funny". It changes the copy of each element
    }    
    for (auto str: family) {
        cout << str << endl;
    }

    cout << endl;

    for (auto &str: family) {
        str = "Funny";
    }
    for (auto const &str: family) {
        cout << str << endl;
    }

    cout << endl;

    return 0;
}