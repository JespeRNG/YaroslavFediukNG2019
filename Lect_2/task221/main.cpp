#include <iostream>

using namespace std;

int main()
{
    int schools[10];
    int number, n, i, your_s;
    n = 1;
    for (i=0; i < 10; i++){
        schools[i]=0;
    }

    i = 0;

    while (i < 10){
        cout << "Enter please a number of the " << n << " school: ";
        cin >> number;

        schools[i]=number;

        n++;
        i++;
    }

    i = 0;
    cout << endl;
    cout << "Now, enter your school number please: ";
    cin >> your_s;

    cout << endl;

    for (i=0; i < 10; i++){
        if (your_s == schools[i]){
            cout << "Seems like I know this school: " << schools[i] << " :D" << endl;
        }
    }
}
