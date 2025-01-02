#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player 
{
    // attributes
    string name;
    int health;
    int xp;

    // methods
    void talk(string);
    bool is_dead();
};

int main()
{
    Player frank;
    Player hero;
}