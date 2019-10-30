#include <iostream>

using namespace std;

void multiply(int digit, int siz, int arr[]){

    int i = 0;

    cout << endl;
    cout << "Now, your array looks like that: " << endl;

    while (i < siz){
        arr[i] = arr[i]*digit;
        cout << i << " element is: " << arr[i] << "," << endl;
        i++;
    }
    cout << endl;
}

int main()
{
    int i =0, siz;
    int multi = 0;

    cout << "Enter please the size of array: ";
    cin >> siz;

    int *d = new int[siz];

    cout << "\nEnter please digits in this array." << endl;

    while (i < siz){
        cout << "Digit of " << i+1 << " element: ";
        cin >> d[i];
        i++;
    }

    cout << endl;

    cout << "Now, enter please a number you want to multiply each element of the array: ";
    cin >> multi;
    cout << endl;

    multiply(multi, siz, d);
}
