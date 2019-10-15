#include <iostream>

using namespace std;

void triangle(int siz){

    for (int i = 0; i < siz; i++){

        for (int j = 1; j < siz - i; j++){
            cout << ' ';
        }

        for (int j = siz - 2 * i; j <= siz; j++){
            cout << '*';
        }

        cout << endl;
    }


    cout << endl;
}

void downstairs(int siz){

    int siz2 = 1;
    int j=0;
    int i=0;

    while (i < siz){
       while (j < siz2){
           cout << '*';
           j++;
       }
       j = 0;
       siz2++;
       cout << endl;
       i++;
    }
}

void upstairs(int siz){
    int siz2 = 1;
    int j=siz;
    int i=0;

    while (i < siz){
       while (j >= siz2){
           cout << '*';
           j--;
       }
       j = siz;
       siz2++;
       cout << endl;
       i++;
    }
}

int main()
{
    int siz = 0;

    cout << "Input please a size of figures: ";
    cin >> siz;
    cout << endl;

    cout << "a) Downstairs:" << endl << endl;
    downstairs(siz);

    cout << endl;
    cout << "b) Upstairs:" << endl << endl;
    upstairs(siz);

    cout << endl;
    cout << "c) Triangle:" << endl << endl;
    triangle(siz);
}
