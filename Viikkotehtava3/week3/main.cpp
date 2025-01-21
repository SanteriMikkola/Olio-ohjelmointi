#include <iostream>
#include <chef.h>
#include <italianchef.h>

using namespace std;

int main()
{
    string chef1 = "Peter";
    string chef2 = "Paul";
    string pw;
    int selectedChef;
    int order;
    int flour;
    int water;
    Chef chef(chef1);
    ItalianChef italianChef(chef2);

    bool play = true;

    while(play){
        cout << "Select chef: 1 = " << chef1 << " or 2 = " << chef2 << " or something else for quit" << endl;
        cin >> selectedChef;
        if (selectedChef == 1){
        chef1:
            cout << "What you want to eat? 1 = salad , 2 = soup"<< endl;
            cin >> order;
            if (order == 1){
                cout << "How much salad?"<< endl;
                cin >> order;
                int salad = chef.makeSalad(order);
            }
            else if (order == 2){
                cout << "How much soup?"<< endl;
                cin >> order;
                int soup = chef.makeSoup(order);
            }
            else{
                goto chef1;
            }
        }
        else if (selectedChef == 2){
        chef2:
            cout << "What you want to eat? 1 = salad , 2 = soup , 3 = italian secret"<< endl;
            cin >> order;
            if (order == 1){
                cout << "How much salad?"<< endl;
                cin >> order;
                int salad = italianChef.makeSalad(order);
            }
            else if (order == 2){
                cout << "How much soup?"<< endl;
                cin >> order;
                int soup = italianChef.makeSoup(order);
            }
            else if (order == 3){
                cout << "Write password, please."<< endl;
                cin >> pw;
                cout << "How much flour?"<< endl;
                cin >> flour;
                cout << "How much water?"<< endl;
                cin >> water;
                bool pwOK = italianChef.askSecret(pw, flour, water);
            }
            else{
                goto chef2;
            }
        }
        else{
            cout << "quit..." << endl;
            play = false;
        }
    }
    return 0;
}
