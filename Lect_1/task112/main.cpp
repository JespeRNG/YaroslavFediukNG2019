#include <iostream>

using namespace std;

int main()
{
    int sal;

    cout << "Input please your salary: ";
    cin >> sal;

    if (sal > 999999){
        cout << "You are a millionaire";
    }

    if (sal > 1000 ){
        if (sal < 1000000){
            cout << "You have a nice salary";
        }
    }

    if (sal < 1001){
        cout << "You have to work harder";
    }

    cout << ", anyway you're a good guy "<<endl;
}
