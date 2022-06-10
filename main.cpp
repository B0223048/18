#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
#include"Game.h"
void game() {
    Game game;
    string a=game.random();
    
    string guess;
    cin >> guess;
    
    while (game.getHint(a, guess) != "4A0B") {
        cout<<game.getHint(a, guess)<<endl;
        cin >> guess;
        
    }
}
int main()
{
    cout << "Welcome to bulls and cows!\nDo you want to play? ";
    string answer;
    while (true)
    {
        while (true)
        {
            if (!getline(cin, answer))
            {
                cout << "I can't get an answer. Exiting.\n";
                return EXIT_FAILURE;
            }
            if (answer == "yes" || answer == "Yes" || answer == "y" || answer == "Y")
                break;
            if (answer == "no" || answer == "No" || answer == "n" || answer == "N")
            {
                cout << "Ok. Goodbye.\n";
                return EXIT_SUCCESS;
            }
            cout << "Please answer yes or no: ";
        }
        
        game();
        cout << "Another game? ";
    }
}