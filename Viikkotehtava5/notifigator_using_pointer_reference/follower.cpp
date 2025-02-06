#include "follower.h"
#include <iostream>

using namespace std;

Follower::Follower() {}

Follower::~Follower()
{
    cout << "Follower destructor " << this->getName() << endl;
}

Follower::Follower(string name)
{
    this->name = name;
    cout << "Creating follower " << name << endl;
}

string Follower::getName()
{
    return name;
}

void Follower::update(string message)
{
    //Show message sent by notifigator
    string name = getName();
    cout << "Follower " << name << " got message " << message << endl;
}
