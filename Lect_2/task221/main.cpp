#include <iostream>

using namespace std;

int main()
{
    int schools[10], your_s;
    int i = 0;
    bool yes_no = 0;

    while (i < 10){
        cout << "Enter please number of the " << i+1 << " school: ";
        cin >> schools[i];
        i++;
    }

    cout << "--------------------------------------------\n";

    cout << "Enter your schools please: ";
    cin >> your_s;

    for (int n=0; n < i; n++){
        if(schools[n] == your_s) yes_no = 1;
    }

    if (yes_no == 0) cout << yes_no << "\nUnfortunately, I don't remember this school :(\n";
    if (yes_no == 1) cout << "\nYeah, I remember this school :)\n";
}
