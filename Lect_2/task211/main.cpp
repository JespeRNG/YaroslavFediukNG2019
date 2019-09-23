#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Input please amount of stars: ";
    cin >> n;

    int i=0;

    while ( i < n ){
        cout << "✭";
        i++;
    }
}
