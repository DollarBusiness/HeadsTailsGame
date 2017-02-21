#include <iostream>
#include <cstdlib>
#include <unistd.h>

using namespace std;

int HTGame()
{
    int answer;
    int flip = rand() % 2 + 1;
    string answer2;

    cout << "PICK HEADS (1) OR TAILS (2): ";
    cin >> answer;
    cout << "\n";
    cout << "flipping..." << endl;
    usleep(2000000);
    if(answer == flip)
    {
        cout << "CORRECT!" << endl;
        cout << "flip result: " << flip << endl;
    }
    else
    {
        cout << "INCORRECT, TRY AGAIN!" << endl;
        cout << "flip result: " << flip << endl;
    }

    cout << "Play again press (y): ";
    cin >> answer2;
    cout << "\n";
    if(answer2 != "Y" || answer2 != "y")
    {
        cout << "GOODBYE!" << endl;
    }

    while(answer2 == "Y" || answer2 == "y")
    {
        HTGame();
    }

    return 0;
}

int main()
{
    cout << "********************" << endl;
    cout << "** HEADS OR TAILS **" << endl;
    cout << "********************\n" << endl;;
    HTGame();

    return 0;
}
