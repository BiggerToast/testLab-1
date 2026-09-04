/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int multi;
    
    cout << "enter the number you multiplied:";
    cin >> multi;
    cout << setw(2) << multi << setw(4) << "x 1=" << setw(3) << multi * 1 << endl <<
     setw(2) << multi << setw(4) << "x 1=" << setw(3) << multi * 2 << endl <<
     setw(2) << multi << setw(4) << "x 1=" << setw(3) << multi * 3 << endl <<
     setw(2) << multi << setw(4) << "x 1=" << setw(3) << multi * 4 << endl <<
     setw(2) << multi << setw(4) << "x 1=" << setw(3) << multi * 5 << endl <<
     setw(2) << multi << setw(4) << "x 1=" << setw(3) << multi * 6 << endl <<
     setw(2) << multi << setw(4) << "x 1=" << setw(3) << multi * 7 << endl <<
     setw(2) << multi << setw(4) << "x 1=" << setw(3) << multi * 8 << endl <<
     setw(2) << multi << setw(4) << "x 1=" << setw(3) << multi * 9 << endl <<
     setw(2) << multi << setw(4) << "x 1=" << setw(3) << multi * 10 << endl;
    return 0;
}