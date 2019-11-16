#include <iostream>

using namespace std;

int main()
{

    int stars[20], i = 0, n = 0, m = 0, maxv = 0, steps = 0;

    while (i < 20){
        cout << "Enter the quantity of stars in the " << i+1 << " line: ";
        cin >> stars[i];
        maxv = stars[0];

        if (stars[i] == 0){
            steps=i;
            break;
        }
        steps=i;
        i++;
    }

    maxv = stars[i];

    for (i=0; i < steps; i++){
        if (stars[i]>maxv){
            maxv = stars[i];
        }
    }

    cout << endl;

    for (i=0; i < steps; i++){
        while (m < stars[i]){
            while(n < (maxv-stars[i])/2){
                cout << " ";
                n++;
            }
            cout << "*";
            m++;
        }
        n=0;
        m=0;
        cout << endl;
    }
}
