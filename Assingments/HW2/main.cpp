//This program is designed to take in an input of three side lengths
//these side lengths should make up a triangle
//the program will then output the perimiter and area of said triangle

#include <iostream>    
#include <string>  
#include <cmath>     
#include <iomanip>

using namespace std;

int main()
{
    double side1 = 0;
    double side2 = 0;
    double side3 = 0;

    cout << "Hello, please enter the three side lengths of your triangle" << endl;
    //getting sides from user
    cin >> side1;
    cin >> side2;
    cin >> side3;
    //if statement to check if the sides given can make a real triangle
if (side1+side2 > side3 && side3+side2 > side1 && side1+ side3> side2)
    {
    
        cout << "This triangle is valid!" << endl;
        double perimiter = side1 + side2 + side3; //perimiter formula
        double s = perimiter/2; // constant used in area equation
        double v = s*(s-side1)*(s-side2)*(s-side3); // first part of area equation
        double area = sqrt(v); // final step in finding area using herons forumula
    
    cout <<"The perimiter of your triangle is " << perimiter << endl; 
    cout <<"The area of your triangle is " << area << endl;
    }
    // output to the user if their triangle is not possible
    else {

        cout <<"This triangle is invalid" << endl;
        
        }
    
    return(0);
}
