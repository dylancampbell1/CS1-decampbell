#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <cassert>
#include <vector>
#include <fstream>

using namespace std;

int randomLogic(){
    srand(time(NULL));

    int random = rand() % 25 + 1;
    return random;
}
string getWord(int random){
    ifstream fin;
    fin.open("words.txt");
    string words[25]; 

    for(int i = 0; i<25; i++){
        fin >> words[i];
    }
    fin.close();
    return words[random];
}

void guessLogic(string correct)
{   
    bool gameContinue = true;
    char g;
    int wrongCounter = 0;
    vector <char> guesses;
    string player(correct.length(), '*');
    for(int i = 0; i < correct.length(); i++){
        player[i] = '_';
    }
        cout << "  +---+" << endl;
        cout << "  |   |" << endl;
        cout << "      |" << endl;
        cout << "      |" << endl;
        cout << "      |" << endl;
        cout << "      |" << endl;
        cout << "=========" << endl;
        cout << player << endl;
    while(gameContinue)
    {
        //player input
        cin >> g;
        bool answerCorrect = false;
        bool alreadyGuessed = false;
        
        //iterates through the guesses vector checking if the players guess is already contained in the vector
        for (char c : guesses) {
            if (c == g) {
                alreadyGuessed = true;
                break;
            }
        }

        if (alreadyGuessed) {
            cout << "You already guessed that!" << endl;
            continue;
        }
        //adds guess to the list of guesses
        guesses.push_back(g);

        //checking if guess is correct
        for(int i = 0; i < correct.length(); i++){
            if (g == correct[i])
            {
                player[i] = g;
                answerCorrect = true;
            }
        }
            if(answerCorrect == true){
                cout << "Correct! " << g << " is in the word" << endl;
            }
            if(answerCorrect == false){
            cout << "incorrect " << g << " is not apart of the word" << endl;
            wrongCounter++;
        }
        //changes based on how mnay times the playe has been wrong
        //Used this for ASCII Art https://gist.github.com/chrishorton/8510732aa9a80a03c829b09f12e20d9c
            switch(wrongCounter){   
            case 0:
                cout << "  +---+" << endl;
                cout << "  |   |" << endl;
                cout << "      |" << endl;
                cout << "      |" << endl;
                cout << "      |" << endl;
                cout << "      |" << endl;
                cout << "=========" << endl;
                break;
                case 1:
                cout << "  +---+" << endl;
                cout << "  |   |" << endl;
                cout << "  0   |" << endl;
                cout << "      |" << endl;
                cout << "      |" << endl;
                cout << "      |" << endl;
                cout << "=========" << endl;
                break;
                case 2:
                cout << "  +---+" << endl;
                cout << "  |   |" << endl;
                cout << "  0   |" << endl;
                cout << "  |   |" << endl;
                cout << "      |" << endl;
                cout << "      |" << endl;
                cout << "=========" << endl;
                break;
                case 3:
                cout << "  +---+" << endl;
                cout << "  |   |" << endl;
                cout << "  0   |" << endl;
                cout << " /|   |" << endl;
                cout << "      |" << endl;
                cout << "      |" << endl;
                cout << "=========" << endl;
                break;
                case 4:
                cout << "  +---+" << endl;
                cout << "  |   |" << endl;
                cout << "  0   |" << endl;
                cout << " /|\\  |" << endl;
                cout << "      |" << endl;
                cout << "      |" << endl;
                cout << "=========" << endl;
                break;
                case 5:
                cout << "  +---+" << endl;
                cout << "  |   |" << endl;
                cout << "  0   |" << endl;
                cout << " /|\\  |" << endl;
                cout << "  |   |" << endl;
                cout << "      |" << endl;
                cout << "=========" << endl;
                break;
                case 6:
                cout << "  +---+" << endl;
                cout << "  |   |" << endl;
                cout << "  0   |" << endl;
                cout << " /|\\  |" << endl;
                cout << "  |   |" << endl;
                cout << " /    |" << endl;
                cout << "=========" << endl;
                break;
                case 7:
                cout << "  +---+" << endl;
                cout << "  |   |" << endl;
                cout << "  0   |" << endl;
                cout << " /|\\  |" << endl;
                cout << "  |   |" << endl;
                cout << " / \\  |" << endl;
                cout << "=========" << endl;
                cout << "Sorry, you ran out of attemps, better luck next time" << endl;
                cout << "The word was " << correct << endl;
                gameContinue = false;
                break;

        }
        cout << player << endl;
        cout <<"Guessed letters: ";
            for (size_t i = 0; i < guesses.size(); ++i)
                {
                cout << guesses[i] << " ";
                }


                if(player == correct)
            {
                cout << "You Win!" << endl;
                gameContinue = false;
            }
    }
}

//Function to play again
bool playAgain(){
    string y = "";
    bool play;
    cout << "enter y/Y to continue, n/N to quit" << endl;
    cin >> y;

    if(y == "y" || y == "Y"){
        play = true;
    }
    else if(y == "n" || y == "N")  
    {play = false;
        cout << "bye bye!" << endl;
    }
    return play;
}

int main(){
    string correct = getWord(randomLogic());
    char arr[correct.length()];
    strcpy(arr, correct.c_str()); //https://www.digitalocean.com/community/tutorials/convert-string-to-char-array-c-plus-plus
    guessLogic(correct);
    
    while(playAgain()){
    correct = getWord(randomLogic());
    char arr[correct.length()];
    strcpy(arr, correct.c_str());
    }

}

