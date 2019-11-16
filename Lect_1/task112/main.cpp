#include <iostream>

using namespace std;

int main()
{
    int sal;

    cout << "Input please your salary: ";
    cin >> sal;

    cout << endl;

    if (sal > 1000){
        if (sal > 1000000){
            cout << "Ti millioner!";
        }
        if (sal < 1000001){
            cout << "Horosho";
        }
    }

    if (sal < 1001){
        cout << "Rabotai bol'she";
    }

    cout << "... no ti molodec\n";
}
