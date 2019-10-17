#include <iostream>

using namespace std;

void multiply(int digit, int arr[], int length){

    int i = 0;

    cout << endl;
    cout << "Now, your array looks like that: " << endl;

    while (i < length){
        arr[i] = arr[i]*digit;
        cout << i << " element is: " << arr[i] << "," << endl;
        i++;
    }
    cout << endl;
}

int main()
{
    int l=0;
    int i =0;
    int multi = 0;

    cout << "Enter please a length of array: ";
    cin >> l;
    int d[l];
    cout << "\nEnter please digits in this array." << endl;

    while (i < l){
        cout << "Digit of " << i << " element: ";
        cin >> d[i];
        i++;
    }

    cout << endl;

    cout << "Now, enter please a number you want to multiply each element of the array: ";
    cin >> multi;
    cout << endl;

    multiply(multi, d, l);
}
