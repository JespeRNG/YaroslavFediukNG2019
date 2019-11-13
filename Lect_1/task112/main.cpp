#include <iostream>

using namespace std;

int main()
{
    int sal;

    cout << "Input please your salary: ";
    cin >> sal;

    cout << endl;

    if(sal >= 1000){
        if (sal >= 1000000){
            cout << "Ti millioner!";
        }else cout << "Horosho";
    }

    if(sal < 1000){
        if(sal > 0) cout << "Rabotai bolshe";
    }

    cout << "... no ti molodec\n";
}
