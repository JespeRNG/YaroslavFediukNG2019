#include <iostream>

using namespace std;

int main()
{
    int i, amount;
    int cards[10];

    for(i=0; i < 10; i++){
        cards[i]=0;
        cout << cards[i] << " ";
    }

    cout << endl << endl;

    while (0 < 1 || i >= 0){
        do{
            cout << "Input please a number of a card you would like to replenish: ";
            cin >> i;

        }while (i > 10 || i < 0 );

        cout << endl;

        cout << "Input please amount of money: ";
        cin >> amount;

        cards[i-1] += amount;

        i = 0;

        for(i=0; i < 10; i++){
            cout << cards[i] << " ";
        }
        cout << endl << endl;
    }
}
