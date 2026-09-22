/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void test(){
    int localCount = 0; // makes this an automatic variable
    int staticCount = 0; //makes this into a static variable test
    int globalCount = 0; // makes this a global variable
    int localConstant = 0; // makes this a local constant to test
    int globalConstant = 0; // makes this a global constant
    
    localCount++;
    staticCount++;
    globalCount++;
    
    cout << "local (test func):" << localCount << endl;
    cout << "static:" << staticCount << endl;
    cout << "global:" << globalCount << endl;
    }

int main()
    {
    int localCount = 0; // makes this an automatic variable to int main()
    
    test();
    cout << "local (Main): " << localCount << endl;
    test();
    cout << "local (Main): " << localCount << endl;
    test();
    cout << "local (Main): " << localCount << endl;

    return 0;
}