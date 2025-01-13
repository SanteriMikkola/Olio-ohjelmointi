#include "Game.h"
#include <iostream>
#include <ctime>

using namespace std;

Game::Game(int mNum){
    maxNumber = mNum;
    cout << "GAME CONSTRUCTOR: game intialized, " << maxNumber << " is maxinum value" << endl << endl;
    play();
}

Game::~Game(){
    cout << endl << "GAME DESTRUCTOR: game over, resources cleaned up" << endl;
}

void Game::play(){
    bool pelaa = true;
    numOfGuesses = 0;
    srand(time(NULL));
    randomNumber = (rand() % maxNumber) + 1;

    cout << "PLAY: number randomized" << endl << endl;

    while(pelaa){
        numOfGuesses++;
        cout << "Guess the number: ";
        playerGuess = 0;
        cin >> playerGuess;

        if (playerGuess > randomNumber){
            cout << "The number is smaller." << endl;
            cout << "Let's try again..." << endl << endl;
        }
        else if (playerGuess < randomNumber){
            cout << "The number is bigger." << endl;
            cout << "Let's try again..." << endl << endl;
        }
        else{
            pelaa = false;
        }
    }
    printGameResult();
}

void Game::printGameResult(){
    cout << endl << "PRINTGAMERESULT: print answer and number of guesses" << endl << endl;
    cout << "Correct! The answer was = " << playerGuess << endl;
    cout << "The number of guesses was = " << numOfGuesses << endl;
}
