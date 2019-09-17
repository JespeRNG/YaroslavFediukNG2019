#include <iostream>

using namespace std;

int main()
{
    int a, b, c, maxs, mins;
    maxs = 0;
    mins = 0;

    cout << "Input please a salary of the 1-st person: ";
    cin >> a;
    mins = a;

    if (a > maxs){
        maxs = a;
    }

    if (a < mins){
        mins = a;
    }

    cout << "Input please a salary of the 2-nd person: ";
    cin >> b;

    if (b > maxs){
        maxs = b;
    }

    if(b < mins){
        mins = b;
    }

    cout << "Input please a salary of the 3-rd person: ";
    cin >> c;

    if (c > maxs){
        maxs = c;
    }

    if (c < mins){
        mins = c;
    }
    cout << endl;

    cout << "Max value is " << maxs << endl << "Min value is " << mins << endl << endl;

    cout << "And the difference between them is " << maxs - mins << endl;

}
