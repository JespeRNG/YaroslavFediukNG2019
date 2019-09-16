#include <iostream>

using namespace std;

int main()
{
    int a,b,act;

    cout << "Input please A number: ";
    cin >> a;
    cout << "Input please B number: ";
    cin >> b;

    cout << "Now decide what to do with them: 1-(-), 2-(+), 3-(/), 4-(*): ";
    cin >> act;

    if (act == 1){
        cout << "The result is: " << a - b << endl;
    }

    if (act == 2){
        cout << "The result is: " << a + b << endl;
    }

    if (act == 3){
        cout << "The result is: " << a / b << endl;
    }

    if (act == 4){
        cout << "The result is: " << a * b << endl;
    }

}
