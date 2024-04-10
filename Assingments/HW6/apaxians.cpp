/*Hello! welcome to my apaxians program. This program will take any word with repeated letters
like bbbbooooobbbbb or caaaan and turn it into single letters
i.e bob , can*/

/* algorithm steps:
1. get a word from the user
2. Take this word and check if the first letter and the letter directly after are the same
3. If they are not the same, add it to the resultant word
4. repeat this proccess until the end of the word
*/


#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string getWord(){
    string word;
    cout << "Hello user, please enter a word you would like to alter" << endl;
    cin >> word;
    return word;
}

string alterWord(string word){
    string result = "";
    for(int i = 0; word.length() > i ; i++){
        if(word[i] != word[i+1])
        {
            result += word[i];
        }
    }
    return result;
}
void test(){
    assert(alterWord("bruuuuhhhhhh") == "bruh");
    assert(alterWord("jojojo") == "jojojo");
    assert(alterWord("mississippi") == "misisipi");
}
int main(int argc, char* argv[]){
        if (argc > 1 && string(argv[1]) == "test"){
        test();
        cout << "all tests passed" << endl;
    }
    else{
    cout << alterWord(getWord()) << endl;}
}