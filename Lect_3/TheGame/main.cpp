#include <iostream>
#include <random>
#include <time.h>

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

        cout << endl << "The size of building map is 30x30 and '-' symbols aren't available to build on!\n";
        cout << "You have to choose your action: ";
        cin >> action;

        switch (action) {
            case 'b':
                {
                    cout << "Choose the place where you'd like to build your building (x,y): ";
                    cin >> x;
                    cin >> y;
                    bmap[y][x] = '*';
                    system("clear");
                    cout << bmap[y][x];
                    break;
                }
            case 'q': cout << endl << "You've just decided to quit the game. Bye !" << endl; return 0;
        }
    }
}
