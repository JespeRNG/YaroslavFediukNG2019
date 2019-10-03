#include <iostream>
#include <random>
#include <time.h>
#include <unistd.h>

using namespace std;

int main()
{
    srand(time(0));
    int bposx = 0; // Building position x
    int bposy = 0; // Building position y
    int buildsize[10][10]; // The building size which is 10 maximum
    int x = 0;
    int y = 0;
    char action;
    int money = 20, delta_m = 0; // Your balance
    char bmap[32][32]; // Buildable map
    int sz = 32; // The size of map

    cout << endl;
    // Creating playable and restricted zone
    for (int i=0; i<sz; i++){
        for (int j=0; j<sz; j++){

            if (j == sz-1 || j == 0 || i == sz-1 || i == 0){
                bmap[i][j] = '--';
            }else bmap[i][j] = ' ';
        }
    }

    // Drawing the map
    while (1){
        for (int i = 0; i < sz; i++){
            for (int j = 0; j < sz; j++){
                cout << bmap[i][j] << " ";
            }
            cout << endl;
        }

        cout << endl << "The size of building map is 30x30 and '-' symbols aren't available to build on!\n\n";
        cout << "You have to choose your action (m-balance, h-wall, b-bank, q-quit the game): ";
        cin >> action;

        switch (action) {
            case 'h':
                {   if (money >= 5){
                        money = money + delta_m;
                        cout << "Choose the place where you'd like to build your building (x,y): ";
                        cin >> x >> y;
                        bmap[y][x] = 'h';
                        system("clear");
                        cout << bmap[y][x];
                        break;
                    }else{
                        system("clear");
                        cout << "Game message: You have less than 10 money. Choose 'm' action to see your balance.\n";
                        break;
                    }
                }
            case 'm':
                {
                        system("clear");
                        cout << "======================";
                        cout << "\n| Your balance is: " << money << " |";
                        cout << "\n======================";
                        cout << endl;
                        sleep(2);
                        system("clear");
                        break;
                }
            case 'b':
                {
                    delta_m = delta_m + 1;
                    cout << "Choose the place where you'd like to build a bank (x,y): ";
                    cin >> x >> y;
                    bmap[y][x] = 'b';
                    system("clear");
                    cout << bmap[y][x];
                    break;
                }
            case 'q': cout << endl << "You've just decided to quit the game. Bye !" << endl; return 0;
        }
    }
}
