/*
Kattis - Hissing Microphone Problem

By: Dylan
Date: 04-04-2024

Hissing Microphone Problem Statement: https://open.kattis.com/problems/hissingmicrophone
Algorithm steps:
1. Read string
2. find "ss" substring in the string
    - if found, print "hiss"
    - otherwise, print "no hiss"
*/

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

// function prototypes
string answer(const string &line);
void testAnswer();
void solve();

int main(int argc, char* argv[]) {
    if (argc == 2 and string(argv[1]) == "test")
        testAnswer();
    else
        solve();
}

string answer(const string &line) {
    // FIXME3 *fixed*
    // implment algorithm step 2
    // return "hiss" if ss is found in line
    // otherwise, return "no hiss"
    string result;
    for(size_t i = 1; i < line.length(); i++ ){
        
       // cout << line[i] << endl;
        if(line.at(i-1) == 's' && line.at(i) == 's')
        {
            result = "hiss";
        }
        else result = "no hiss";
    }
    


    return result;
}

// unit testing answer()
void testAnswer() {
    // FIXME4 *fixed*
    // write at least two test cases to test answer()
    assert(answer("hissssssssssssss") == "hiss");
    assert(answer("hisisisisisisis") == "no hiss");
    cerr << "All test cases passed!\n";
}

// solving the problem for kattis
void solve() {
     string line;
     cout << "please enter a word that is lowercase only and less than 30 characters(no spaces please)" << endl;
     getline(cin, line);
    // string consists of only lowercase letters (no spaces) upto 30 chars
    // FIXME5 *fixed*
    // read string into line
    cout << answer(line) << endl;
}