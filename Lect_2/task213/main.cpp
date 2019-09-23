#include <iostream>

using namespace std;

int main()
{
    int i,s_x, s_y;

    i=0;
    int n=1;

    cout << "Input please the size of square: ";
    cin >> s_x;
    cout << endl;

    while ( i < s_x ){
        cout << "* ";
        i++;
        if ( i == s_x && n < s_x){
            cout << endl;
            i = 0;
            n++;
        }
    }
    cout << endl;
}
