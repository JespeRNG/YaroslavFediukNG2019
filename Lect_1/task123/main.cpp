#include <iostream>

using namespace std;

int main()
{
    int a, b, c, maxs;

    cout << "Input please the 1-st number: ";
    cin >> a;
    maxs = a;

    cout << "Input please the 2-nd number: ";
    cin >> b;
        if (b > maxs){
            maxs = b;
        }
    cout << "Input please the 3-rd number: ";
    cin >> c;
        if (c > maxs){
            maxs = c;
        }
    cout << endl;
    cout << "The biggest number is " << maxs << endl;
}
