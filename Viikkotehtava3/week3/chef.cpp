#include "chef.h"
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

Chef::Chef(){}

Chef::Chef(string name) {
    chefName = name;
    cout << "CHEF CONSTRUCTOR: " << chefName << " intialized" << endl;
}

Chef::~Chef()
{
    string chef = getName();
    cout << "Chef " << chef << " DESTRUCTOR" << endl;
}

string Chef::getName()
{
    return chefName;
}

int Chef::makeSalad(int ingredients)
{
    int delay;
    string chef = getName();

    //Calculate how much food need to cook
    float foods = (float)ingredients / 5.0f;

    //"Make" the food which match the order
    if (foods < 1.0f && foods != 0.0f && foods > 0.0f){
        cout << "CHEF " << chef << ": " << "1 children salad portions" << endl;
        delay = 1 * 5;
    }
    else if ((foods > 1.0f && foods < 2.0f) ||
             (foods > 2.0f && foods < 3.0f) ||
             (foods > 3.0f && foods < 4.0f) ||
             (foods > 5.0f && foods < 6.0f)) {
        cout << "CHEF " << chef << ": " << (int)foods << " salad portions with some extra toppings" << endl;
        delay = (int)foods * 5;
    }
    else{
        cout << "CHEF " << chef << ": " << (int)foods << " salad portions" << endl;
        delay = (int)foods * 5;
    }

    //Delay for cooking
    cout << "Cooking..." << endl;
    this_thread::sleep_for(chrono::seconds(delay));

    cout << "CHEF " << chef << ": Order ready" << endl;

    return (int)foods;
}

int Chef::makeSoup(int ingredients)
{
    int delay;
    string chef = getName();

    //Calculate how much food need to cook
    float foods = (float)ingredients / 3.0f;

    //"Make" the food which match the order
    if (foods < 1.0f && foods != 0.0f && foods > 0.0f){
        cout << "CHEF " << chef << ": " << "1 children soup portions" << endl;
        delay = 1 * 5;
    }
    else if ((foods > 1.0f && foods < 2.0f) ||
             (foods > 2.0f && foods < 3.0f) ||
             (foods > 3.0f && foods < 4.0f) ||
             (foods > 5.0f && foods < 6.0f)) {
        cout << "CHEF " << chef << ": " << (int)foods << " soup portions with some extra toppings" << endl;
        delay = (int)foods * 5;
    }
    else{
        cout << "CHEF " << chef << ": " << (int)foods << " soup portions" << endl;
        delay = (int)foods * 5;
    }

    //Delay for cooking
    cout << "Cooking..." << endl;
    this_thread::sleep_for(chrono::seconds(delay));

    cout << "CHEF " << chef << ": Order ready" << endl;

    return (int)foods;
}
