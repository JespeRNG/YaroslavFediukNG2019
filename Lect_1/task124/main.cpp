#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Input A number: ";
    cin >> a;
    cout << "Input B number: ";
    cin >> b;
    cout << "Input C number: ";
    cin >> c;

    if (a*b == c || a*c == b || b*c==a){
        cout << "\nYES\n";
    }else cout << "\nNO\n" << endl;
}
