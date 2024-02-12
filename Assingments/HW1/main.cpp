//This is a program that will print out the 7 stages
//of hangman using ASCII art
#include <iostream> //library for input and output
#include <string> //library for string data

using namespace std;


int main(){

//Getting user name and displaying it
string pname;
cout << "Hello user! Please enter your full name to continue ";
getline(cin,pname);
cout << "Welcome to my hangman program "<< pname <<". Hope you enjoy, although it's still under construction ):" << endl;

//variables for displaying hagman
string stage0 = "Stage 0 \n\t|-----------------\n\t|/\t|\n\t|\n\t|\n\t|\n\t|\n\t|\n   ===========";

cout << stage0;

cin.get();
//STAGE 1
string stage1 = "Stage 1 \n\t|-----------------\n\t|/\t|\n\t|\t0\n\t|\n\t|\n\t|\n\t|\n   ===========";

cout << stage1;
cin.get();
//STAGE 2
string stage2 = "Stage 2 \n\t|-----------------\n\t|/\t|\n\t|\t0\n\t|\t|\n\t|\n\t|\n\t|\n   ===========";

cout << stage2;
cin.get();

//STAGE 3
string stage3 = "Stage 3 \n\t|-----------------\n\t|/\t|\n\t|\t0\n\t|      /|\n\t|\n\t|\n\t|\n   ===========";

cout << stage3;
cin.get();

//STAGE 4
string stage4 = "Stage 4 \n\t|-----------------\n\t|/\t|\n\t|\t0\n\t|      /|\\\n\t|\n\t|\n\t|\n   ===========";

cout << stage4;
cin.get();

//STAGE 5
string stage5 = "Stage 5 \n\t|-----------------\n\t|/\t|\n\t|\t0\n\t|      /|\\\n\t|\t|\n\t|\n\t|\n   ===========";

cout << stage5;
cin.get();

//STAGE 6
string stage6 = "Stage 6 \n\t|-----------------\n\t|/\t|\n\t|\t0\n\t|      /|\\\n\t|\t|\n\t|      /\n\t|\n   ===========";

cout << stage6;
cin.get();

//STAGE 7
string stage7 = "Stage 7 \n\t|-----------------\n\t|/\t|\n\t|\t0\n\t|      /|\\\n\t|\t|\n\t|      / \\\n\t|\n   ===========";

cout << stage7;
cin.get();



return(0);

}