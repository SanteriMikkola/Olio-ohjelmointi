#include "italianchef.h"
#include "chef.h"
#include <thread>
#include <chrono>
#include <bits/stdc++.h>

using namespace std;

ItalianChef::ItalianChef(){}

ItalianChef::ItalianChef(string name) : Chef(name)
{
    chefName = name;
    cout << "ITALIANCHEF CONSTRUCTOR: " << chefName << " intialized" << endl;
}

ItalianChef::~ItalianChef()
{
    string chef = getName();
    cout << "ItalianChef " << chef << " DESTRUCTOR" << endl;
}

bool ItalianChef::askSecret(string pw, int flour, int water)
{
    if ((pw.compare(password)) == 0) {
        cout << "Password ok!" << endl;
        this->flour = flour;
        this->water = water;
        int pizza = makepizza();
        return true;
    }
    else {
        cout << "Wrong password..." << endl;
        return false;
    }
}

int ItalianChef::makepizza()
{
    int delay;
    string chef = getName();

    //Calculate how much food need to cook
    float floursForPortions = (float)flour / 5.0f;
    float waterForPortions = (float)water / 5.0f;
    float foods = min(floursForPortions, waterForPortions);

    //"Make" the food which match the order
    if (foods < 1.0f && foods != 0.0f && foods > 0.0f){
        cout << "CHEF " << chef << ": " << "1 children pizza portions" << endl;
        delay = 1 * 5;
    }
    else if ((foods > 1.0f && foods < 2.0f) ||
             (foods > 2.0f && foods < 3.0f) ||
             (foods > 3.0f && foods < 4.0f) ||
             (foods > 5.0f && foods < 6.0f)) {
        cout << "CHEF " << chef << ": " << (int)foods << " pizza portions with some extra toppings" << endl;
        delay = (int)foods * 5;
    }
    else{
        cout << "CHEF " << chef << ": " << (int)foods << " pizza portions" << endl;
        delay = (int)foods * 5;
    }

    //Delay for cooking
    cout << "Cooking..." << endl;
    this_thread::sleep_for(chrono::seconds(delay));

    cout << "CHEF " << chef << ": Order ready" << endl;

    return (int)foods;
}
