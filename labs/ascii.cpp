/*
    StdIO Lab
    ASCII Art - using literals and variables
    
    Updated By: <Dylan Campbell> #FIXME1
    Date: 02/05/2024 #FIXME2
    
    This program produces an ASCII art on the console.

    Algorithm steps: 
    1. Use variables to store data/values
    2. Write a series of cout statements to print the data/values
*/

#include <iostream> //library for input and output
#include <string> //library for string data
 
using namespace std; //resolve cout, cin, and endl names
 
//main entry point of the program
int main()
{
    //FIXME3: declare a variable to store name

    string pName;

    //FIXME4: prompt user to enter their name and store the value in variable
    cout << "What is your name? ";

    getline(cin, pName);

    //FIXME5: greet the name using the variable as the following output
    //must output: Nice meeting you, <name>!

    cout<< "Nice meeting you " << pName << "!" << endl;    

    cout << "Hope you like my Tom & Jerry ASCII art...\n\n";

    string line1 = "    |\\_/|\t*************************\t   (\\_/)\n";
    string line2 = "  / @  @ \\\t*\tASCII Lab\t*\t  (='.'=)\n";
    string line3 = " ( >  0  < )\t*By: <Dylan Campbell>\t*\t (\") _ (\")\n";
    string line4 = "    >>x<<\t*\tCSCI 111\t*\n";
    string line5 = "   /  O  \\\t*************************\n";

    cout << left;
    cout << line1;
    //FIXME6: use variable to print the second line line of the graphic
    cout << line2;
    //FIXME7: print the third line of the graphics
    cout << line3;
    //FIXME8: use variable to print the fourth line
    cout << line4;
    //FIXME9: use variable to print the fifth line
    cout << line5;
    //Note: You can add more lines or print more ASCII arts of your choice if you'd like...

    cout << "\nGood bye... hit enter to exit the program: " << '\n';
    //FIXME10: make the console wait for user input
    cin.get();
    return 0; //exit program by returning 0 status to the system
}