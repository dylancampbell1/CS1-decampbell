//HEllO! Welcome to my conditionals program
//This program will take 5 numbers and preform various operations with them


#include <iostream>
#include <cstdio>
#include <string>
#include <cassert>
 
using namespace std;
void printMenu(void) {
    cout << "Menu options:\n";
    cout << "[1] Sum of 5 Numbers\n";
    cout << "[2] Product of 5 Numbers\n";
    cout << "[3] Average of 5 Numbers\n";
    cout << "[4] Find the largest of the numbers\n";
    cout << "[5] Find the smallest of the numbers\n";
    cout << "[6] Determine if the sum of numbers is even or odd\n";
    cout << "[7] Quit the program\n";
    cout << "Enter one of the menu options [1-7]: ";
}


double addNums(double num1, double num2,double num3, double num4, double num5)
{
    return num1+num2+num3+num4+num5;
}
double product(double num1, double num2,double num3, double num4, double num5)
{
    return num1*num2*num3*num4*num5;
}
double avg(double num1, double num2,double num3, double num4, double num5)
{
    return addNums(num1,num2,num3,num4,num5)/5;
}
double large(double num1, double num2,double num3, double num4, double num5)
{
    double largest;
    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5){
        largest = num1;
    }
    else if(num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5){
        largest = num2;
    }
    else if(num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5){
        largest = num3;
    }
        else if(num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5){
        largest = num4;
    }
    else {
        largest = num5;
    }
    return largest;
}

double small(double num1, double num2,double num3, double num4, double num5)
{
    double smallest;
    if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5){
        smallest = num1;
    }
    else if(num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5){
        smallest = num2;
    }
    else if(num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5){
        smallest = num3;
    }
        else if(num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5){
        smallest = num4;
    }
    else {
        smallest = num5;
    }
    return smallest;
}

bool even(double num1, double num2,double num3, double num4, double num5)
{
    int even;
    int sum;
    sum = addNums(num1,num2, num3,num4,num5);
    bool output;

    if (sum % 2 == 0){
        output = true;
    }
    else{ output = false;
    }
    return output;
}

void test() {


    assert(addNums(5,2,1,1,1) == 10);
    assert(addNums(3,5,2,5,3) == 18);
     assert(addNums(1,1,1,1,1) == 5);

    assert(product(5,2,4,2,3) == 240);
    assert(product(0,1,0,0,0) == 0);
    assert(product(2,6,2,3,0) == 0);

    assert(avg(10,10,10,10,10) == 10);
    assert(avg(10,20,30,40,50) == 30);
    assert(avg(1,2,3,4,5) == 3);

    assert(large(5,2,3,2,4) == 5);
    assert(large(1,4,3,10,111) == 111);
    assert(large(1,1,1,1,2) == 2);
   

    assert(small(10,10,2,1,0) == 0);
    assert(small(1,123,32,43,21) == 1);
    assert(small(54,324,23,33,24) == 23);

    assert(even(10,10,2,1,0) == false);
    assert(even(1,3,3,3,2) == true);
    assert(even(4,4,3,3,4) == true);
    cout << "All tests passed" << endl;
}
int main()
{
    test();
    int option;
    string name;
    bool run = true;
    cout << "hello user, please enter your name" << endl;
    cin >> name;
    printMenu();
    cout << "Hello " << name << ", enter what option you wold like from the menu" << endl;
    cin >> option;

    switch(option) {
        case 1:
        {
            double num1;
            double num2;
            double num3;
            double num4;
            double num5;
            cout << "Hello, type 5 numbers, pressing enter or space after each number" << endl;
            cin >> num1;
            cin >> num2;
            cin >> num3;
            cin >> num4;
            cin >> num5;
            double sum = addNums(num1, num2, num3, num4, num5);
            cout << "the sum is " << sum << endl;
            break;
        }
        case 2:
        {
            double num1;
            double num2;
            double num3;
            double num4;
            double num5;
            cout << "Hello, type 5 numbers, pressing enter or space after each number" << endl;
            cin >> num1;
            cin >> num2;
            cin >> num3;
            cin >> num4;
            cin >> num5;
            double mult = product(num1, num2, num3, num4, num5);
            cout << "the product is " << mult << endl;
            break;
        }
        case 3:
        {
            double num1;
            double num2;
            double num3;
            double num4;
            double num5;
            cout << "Hello, type 5 numbers, pressing enter or space after each number" << endl;
            cin >> num1;
            cin >> num2;
            cin >> num3;
            cin >> num4;
            cin >> num5;
            double average = avg(num1, num2, num3, num4, num5);
            cout << "the average is " << average << endl;
            break;
        }
        case 4:
        {
            double num1;
            double num2;
            double num3;
            double num4;
            double num5;
            cout << "Hello, type 5 numbers, pressing enter or space after each number" << endl;
            cin >> num1;
            cin >> num2;
            cin >> num3;
            cin >> num4;
            cin >> num5;
            double big = large(num1, num2, num3, num4, num5);
            cout << "the largest is " << big << endl;
            break;
        }
        case 5:
        {
            double num1;
            double num2;
            double num3;
            double num4;
            double num5;
            cout << "Hello, type 5 numbers, pressing enter or space after each number" << endl;
            cin >> num1;
            cin >> num2;
            cin >> num3;
            cin >> num4;
            cin >> num5;
            double smol = small(num1, num2, num3, num4, num5);
            cout << "the smallest is " << smol << endl;
            break;
        }
         case 6:
        {
            double num1;
            double num2;
            double num3;
            double num4;
            double num5;
            cout << "Hello, type 5 numbers, pressing enter or space after each number" << endl;
            cin >> num1;
            cin >> num2;
            cin >> num3;
            cin >> num4;
            cin >> num5;
            bool ev = even(num1, num2, num3, num4, num5);
            string word;
            if (ev = true){
                word = "even";
            }
            else{ 
                word = "false";}
            cout << "the sum of the numbers is " << word << endl;
            break;
        }
        case 7:
        {
            default:
             return false;
        }
    }
    return 0;

}
