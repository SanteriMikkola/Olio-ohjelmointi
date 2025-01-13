#include <iostream>
#include "Game.h"

using namespace std;

int main()
{
    int maxNum = 0;

    cout << "Provide the largest random number value: ";
    cin >> maxNum;
    cout << "" << endl;
    Game game(maxNum);
    return 0;
}
