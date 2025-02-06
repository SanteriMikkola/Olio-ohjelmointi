#ifndef NOTIFIGATOR_H
#define NOTIFIGATOR_H
#include <iostream>
#include <follower.h>
using namespace std;

class Notifigator
{
public:
    Notifigator();
    ~Notifigator();
    void add(Follower *);
    void _delete(Follower *);
    void print();
    void send(string);
private:
    Follower *followers = nullptr;
};

#endif // NOTIFIGATOR_H
