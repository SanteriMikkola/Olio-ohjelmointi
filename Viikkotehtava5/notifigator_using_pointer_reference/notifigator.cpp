#include "notifigator.h"
#include <iostream>
#include "follower.h"

using namespace std;

Notifigator::Notifigator()
{
    cout << "Creating notifigator" << endl;
}

Notifigator::~Notifigator()
{
    // Notifigator destructor
    cout << "Notifigator destructor" << endl;
}

void Notifigator::add(Follower *follower)
{
    // Add follower in notifigation list
    cout << "Adding follower " << follower->getName() << " to the list" << endl;

    if (followers == nullptr){
        followers = follower;
    }
    else{
        follower->next = followers;
        followers = follower;
    }
}

void Notifigator::_delete(Follower *follower)
{
    // Delete specific follower from the list
    cout << "Deleting follower " << follower->getName() << " from the list" << endl;

    if (followers == nullptr) return;

    if (followers == follower) {
        followers = followers->next;
        return;
    }
    else{
        followers->next = follower->next;
    }
}

void Notifigator::print()
{
    //Print all followers
    cout << "Notifigator followers:" << endl;
    Follower *curFollower = followers;
    while (curFollower != nullptr){
        string name = curFollower->getName();
        cout << "Follower " << name << endl;
        curFollower = curFollower->next;
    }
}

void Notifigator::send(string message)
{
    //Send message for all followers
    cout << "Notifigator send message: " << message << endl;
    Follower *curFollower = followers;
    while (curFollower != nullptr){
        curFollower->update(message);
        curFollower = curFollower->next;
    }
}
