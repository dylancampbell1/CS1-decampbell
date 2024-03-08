//Hello! Welcome to my calculator
//The Calcuulator will input two numbers and output varias mathmatical operations between these numbers


#include <iostream>
#include <cmath>    

using namespace std;

//These are all the different fuctions that can be called in main

double addition(float num1, float num2)
{
    double result;
    
    result = num1 + num2;
    cout << "These numbers added is equal to " << result << endl;
    return result;
}

double multiply(float num1, float num2)
{
    double result;
    
    result = num1 * num2;
    cout << "These numbers multiplied is equal to " << result << endl;
    return result;
}

double divide(float num1, float num2)
{
    double result;
    
    result = num1 / num2;
    cout << "num1 divided by num2 is equal to " << result << endl;
    return result;
}

double subtract(float num1, float num2)
{
    double result;
    
    result = num1 - num2;
    cout << "num1 minus num2 is equal to " << result << endl;
    return result;
}

double Remainder(int num1, int num2)
{
    double result;
    
    result = num1%num2;
    cout << "The remainder of num1 divided by num2 is  " << result << endl;
    return result;
}

double power(float num1, float num2)
{
        double result;
    
    result = pow(num1, num2);
    cout << "num1 raised to the num2 is " << result << endl;
    return result;
}

double square(float num1)
{
        double result;
    
    result = sqrt(num1);
    cout << "The square root of num1 is " << result << endl;
    return result;
}

//This is an if statement that checks which number is larger

int greaterThan(float num1, float num2)
{
        if (num1 > num2)
    {
        cout << "num1(" << num1 << ")is greater" << endl;

    }
    else if (num1 < num2)
    {
        cout << "num2(" << num2 << ")is greater" << endl;
    }
    else
    {
        cout << "The numbers are equal" << endl;
    }
    return 0;
}

//This is the test function that verifies all the functions output the desired value

void test()
{
    assert (addition(2,4) == 6);
    assert (addition(6,9) == 15);
    cout << "Adding works!" << endl;
    assert (subtract(6,4) == 2);
     assert (subtract(90,94) == -4);
    cout << "Subtracting works!" << endl;
    assert (multiply(9,9) == 81);
    assert (multiply(9,-9) == -81);
    cout << "Multipication is a go!" << endl;
    assert (square(4) == 2);
    assert (square(16) == 4);
    cout << "Square Root is in pristine condition" << endl;
    assert (divide(8,4) == 2);
    assert (divide(10,10) == 1);
    cout << "All clear to divide" << endl;
    assert (power(2,3) == 8);
    assert (power(5,2) == 25);
    cout << "WE HAVE THE POWER" << endl;
    assert (Remainder(12,5)== 2);
    assert (Remainder(8,8)== 0);
    cout << "Don\'t forget about the remainder ... (it\'s working) " << endl;
    cout << "All tests passed" << endl;
}

//This main function gets our 2 numbers
//It then calls all the functions and passes the numbers inside them
//This is inside a loop allowing for the user to repeat this proccess as much as they'd like

int main()
{
    test();
    float num1;
    float num2;
    int var = 1;
    while (var = 1)
    {
    cout << "type two numbers" << endl;
    cin >> num1;
    cin >> num2; 
    greaterThan(num1,num2);
    addition(num1, num2);
    multiply(num1,num2);
    divide(num1, num2);
    subtract(num1,num2);
    power(num1,num2);
    square(num1);
    Remainder(num2, num1);
    cout << "type 0 to end program 1 to enter another number" << endl;
    cin >> var;
    }
    return 0;
}