#include <iostream>

using namespace std;

int main()
{
    int siz = 0;

    cout << "Input please a size of your tree: ";
    cin >> siz;

    for (int i = 0; i < siz; i++){

        for (int j = 1; j < siz - i; j++){
            cout << ' ';
        }

        for (int j = siz - 2 * i; j <= siz; j++){
            cout << '*';
        }

        cout << endl;
    }

    int i = 1;

    while(i <= siz){

        cout << ' ' ;

        if (i == siz-1){
            cout << '*';
        }

        i++;
    }
}
