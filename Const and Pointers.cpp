#include <iostream>

using namespace std;

int main () {

    int highScore {100};
    int lowScore {65};

    //const int *scorePointer {&highScore}; //Doesn't allow the data that is being pointed to, to be changed

    //int *const scorePointer {&highScore}; //The pointer itself cannot change and point somewhere else but the data within the pointer can be changed

    //const int *const scorePointer {&highScore}; //Can't change the data or point the pointer to somewhere else

    return 0;
}