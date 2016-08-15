#include <iostream>
#include "Pen.h"
#include "Paper.h"
#include "Exceptions.h"

using namespace std;

int main() {
    Pen pen;
    Paper* paper = new Paper(1000);
    // Paper paper(1000);

    try {
        pen.write(*paper, "Hello, world!\n");
    } catch (OutOfSpace obj) {
        cout << "Out of free space!" << endl;
    }
    paper->show();
    
    delete paper;

    return 0;
}