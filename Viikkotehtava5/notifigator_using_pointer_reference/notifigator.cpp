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
    // Destruct followers one by one on the list
    cout << "Notifigator destructor" << endl;
    Follower *current = followers;
    while (current != nullptr) {
        Follower *next = current->next;
        delete current;
        current = next;
    }
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
    // Delete specific follower
    cout << "Deleting follower " << follower->getName() << endl;

    if (followers == nullptr) return;

    if (followers == follower) {
        followers = followers->next;
        delete follower;
        return;
    }
    else{
        Follower *prev = followers;
        while (prev->next != nullptr && prev->next != follower) {
            prev = prev->next;
        }

        if (prev->next == follower) {
            prev->next = follower->next;
            delete follower;
        }
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
