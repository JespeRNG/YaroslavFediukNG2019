#include <iostream>

using namespace std;

int main()
{
    int n;
    do{
        cout << "Input please an amount of numbers: ";
        cin >> n;
    }while (n < 1);

    for (int i=0; i < n; i++){
        cout << i << ", ";
    }

    cout << n << ".";

    cout << endl;
}
