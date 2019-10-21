#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

void play(int quan_c, int quan_f){
    int random[10];

    cout << "-----Random results-----" << endl;

    for(int i=0; i < quan_c; i++){
        random[i] = rand() % quan_f+1;
        cout << "Cube "<< i+1 << " shows: "<< random[i] << " points."<< endl;
    }

    cout << "------------------------" << endl << endl;

    int sum = 0;

    for (int i=0; i < quan_c; i++){
        sum += random[i];
    }

    cout << "Total points: " << sum <<".\n";
}

int main()
{
    int quan_c, quan_f;

    srand(time(NULL));

    do{
        cout << "Enter please the quantity of cubes(0-10): ";
        cin >> quan_c;
    }while(quan_c > 10);

    cout << "\nEnter please quantity of facets: ";
    cin >> quan_f;

    cout << endl;

    play(quan_c,quan_f);
}
