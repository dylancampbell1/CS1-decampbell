#include <iostream>

using namespace std;

int main()
{

    int number1;
    number1 = 21483647;
    cout << number1 << endl;

    number1--;

    cout << number1 << endl;
    number1 = 45;
    int number2 = 8000;
    int sum = number1 + number2;
    cout << "please enter number 1" << endl;
    cin >> number1;
    cout << "please enter number 2" << endl;
    cin >> number2;
 
    sum = number1 + number2;
    cout << number1  << endl;
    cout << number2 << endl;
    cout << number1 << "+" << number2 << "=" << sum << endl;
    cout << &number1 << endl;

    cout  << "Hello World once again" << endl;

    return 0;
}