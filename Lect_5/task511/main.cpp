#include <iostream>

using namespace std;

void multiply(int digit, int arr[]){

    int i = 0;

    cout << endl;
    cout << "Now, your array looks like that: " << endl;

    while (i < 6){
        arr[i] = arr[i]*digit;
        cout << i << " element is: " << arr[i] << "," << endl;
        i++;
    }
    cout << endl;
}

int main()
{
    int i =0;
    int multi = 0;
    int d[6];

    cout << "Enter please digits in this array." << endl;

    while (i < 6){
        cout << "Digit of " << i+1 << " element: ";
        cin >> d[i];
        i++;
    }

    cout << endl;

    cout << "Now, enter please a number you want to multiply each element of the array: ";
    cin >> multi;
    cout << endl;

    multiply(multi, d);
}
