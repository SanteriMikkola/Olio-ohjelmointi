#include <iostream>
#include <ctime>

using namespace std;

int game(int maxnum);

int main()
{
    int maxNum = 0;

    cout << "Anna suurin satunnaisluku arvo: ";
    cin >> maxNum;

    int arvauksia = game(maxNum);
    cout << "Arvauksia oli: " << arvauksia << endl;

    return 0;
}

int game(int maxnum){

    bool pelaa = true;
    int yritys = 0;
    srand(time(NULL));
    int satluku = (rand() % maxnum) + 1;

    while(pelaa){
        yritys++;
        cout << "Arvaa luku: ";
        int arvaus = 0;
        cin >> arvaus;

        if (arvaus > satluku){
            cout << "Luku on pienempi" << endl;
            cout << "Yritetaan uudelleen..." << endl << endl;
        }
        else if (arvaus < satluku){
            cout << "Luku on suurempi" << endl;
            cout << "Yritetaan uudelleen..." << endl << endl;
        }
        else{
            cout << "Oikea vastaus!" << endl;
            pelaa = false;
        }
    }

    return yritys;
}
