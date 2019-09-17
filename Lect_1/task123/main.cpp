#include <iostream>

using namespace std;

int main()
{
    int a, b, c, maxs;

    cout << "Input please the 1-st salary: ";
    cin >> a;
    maxs = a;

    cout << "Input please the 2-nd salary: ";
    cin >> b;
        if (b > maxs){
            maxs = b;
        }
    cout << "Input please the 3-rd salary: ";
    cin >> c;
        if (c > maxs){
            maxs = c;
        }
    cout << endl;
    cout << "The biggest salary is " << maxs << endl;
}
