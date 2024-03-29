#include <iostream>
#include <cstdio>
#include <string>
#include <stdlib.h> 
#include <cassert>
#include <time.h>     
 
using namespace std;


int checkGuess(int g, int numberCorrect)
{
    int result;
   if (g == numberCorrect){
        result = 0;

   }
   else if(g < numberCorrect){
     result = -1;
    }
  else {
     result = 2;}
    return result;
}
void test(){
    assert(checkGuess(20,20) == 0);
    assert(checkGuess(18,17) == 2);
    assert(checkGuess(10,20) == -1);

}
int randomLogic(){
    srand(time(NULL));

    int numberCorrect = rand() % 20 + 1;
    return (numberCorrect);
}
int readNumber(){
    int guess;
    while(true){
    printf("Guess a number between 1 and 20\n");
    cin >> guess;
    if(guess>0 && guess<21){
        break;
    }
    }
    return (guess);
}
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
    
    }
    return play;
}
int game(){
int winNum = 0;
int total = 0;
 bool play = true;
    while(play == true){
     int turn = 0;
  
    bool win = false;
   
    int answer = randomLogic();
    while(turn<6){
        int guess = readNumber();
        if(checkGuess(guess,answer) == 0){
            printf("No... It can't be... you guessed the number correct\n");
            win = true;
            break;
        }
        else if(checkGuess(guess,answer) == -1){
            printf("HA!, Your number is less than my number, guess again... unless you give up\n");
        }
        else printf("Too big buddy, try a little lower\n");
        turn++;
    }
if(win == true){
    printf("Congratualations on getting my number... you just got lucky though\n");
    play = playAgain();
    winNum++;
    total++;
}
if(win == false){
    printf("Better luck next time.... looooseeeer\n");
    printf("The number was %d\n", answer);
    play = playAgain();
    total++;
}
}
int percentage = (winNum/total)*100;
 printf("You have played %d times, you have won %d times, giving you a win percentage of %d %\n",total,winNum,percentage);
}
    /*while(answer != guess && i<6)
    {
        i++;
        printf("Guess a number between 1 and 20\n");
        cin >> guess;
        if(numberCorrect < guess){
            printf("HAha, you'll never guess the number\n");
        }

    }
    if (i<7){
    printf("Noooooo, how did you get that");
    }
    else{
        printf("Better luck next time.... looooseeeer");*/
// https://cplusplus.com/reference/cstdlib/rand/
int main(){
   game();

}
