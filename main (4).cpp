/******************************************************************************
//
// Name: Esequiel Casillas
// Date: 9/20/2026
// Class: CSCI 1470.04
// Semester: Fall 2026
// Instructor: Dr. Jonatan Reyes
//
// Program Description: Lab 3- how far is the sun
*******************************************************************************/
#include <iostream>
using namespace std; 


int main()
{
    int distance;
    int speed = 299792;
    int time = 499;
    
    
    cout << "time traveled:" << time / 60 << " minutes and " << time % 60 << " seconds" ;
    cout << endl;
    cout << "time traveled in seconds:" << time << "seconds";
    cout << endl << endl;
    
    cout << "distance from earth to the sun" << endl;
    
    

    distance = speed * time;
    cout << distance << " klometers" <<endl;
    cout <<  distance * 0.00621371  << " miles";
    
    
    return 0;
}