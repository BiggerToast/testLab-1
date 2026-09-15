/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>// for random() and srand()
#include <ctime> // for ctime
using namespace std;

int main()
{
    srand(time(0));
    int randNum = rand(); // generates a randome number
    int randNumRange = rand() % 100 + 1;
    cout << "randome number" << randNum << endl;
    cout << "rand num 100-1" << randNumRange << endl;
    cout<<"Hello World";

    return 0;
}