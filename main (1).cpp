/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    string Name;
    double Number;
    
    cout << "Enter A Name:";
    getline(cin, Name);
    
    cout << "Enter An Ammount:";
    cin >> Number;
    cout<< endl;
    cout << "Pay to the order of: [" << setw (20) << setfill ('_')<< Name << "]"<< endl; 
    cout << "Ammount: $" << setw(40) << setfill('*') << Number << endl;
    cout << "Memo: Monthly Subscription";
    
    
    return 0;
}