#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include <chef.h>

using namespace std;

class ItalianChef : public Chef
{
public:
    ItalianChef();
    ItalianChef(string);
    ~ItalianChef();
    bool askSecret(string, int, int);
private:
    const string password = "pizza";
    int flour;
    int water;

    int makepizza();
};

#endif // ITALIANCHEF_H
