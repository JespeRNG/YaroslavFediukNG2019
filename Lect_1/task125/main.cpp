#include <iostream>

using namespace std;

int main()
{
    int n, m, k, quan = 0;

    cout << "Enter please the quantity of cones: ";
    cin >> n;
    cout << "Enter please the quantity of nuts: ";
    cin >> m;
    cout << "Squirrel needed nuts to be happy: ";
    cin >> k;

    quan = n * m;

    if (quan >= k){
        cout << "\nYES!\n";
    }else{
        cout << "\nNO!\n";
    }

}
