#include <iostream>
#include "notifigator.h"
#include "follower.h"

using namespace std;

int main()
{
    // Create notifigator
    Notifigator n;

    // Create followers
    Follower a("A");
    Follower b("B");
    Follower c("C");
    cout << endl;

    // Add followers to the notification list
    n.add(&a);
    n.add(&b);
    n.add(&c);
    cout << endl;

    // print all followers
    n.print();
    cout << endl;

    // Send message for followers
    n.send("Hello World!!");
    cout << endl;

    // Delete b follower on the notification list
    n._delete(&b);

    n.print();
    cout << endl;

    // Send message for followers
    n.send("This message goes for all followers.");
    cout << endl;

    return 0;
}
