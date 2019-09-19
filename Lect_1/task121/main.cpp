#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, x1, x2, D, sqrtD;

    cout << "Input please a number: ";
    cin >> a;
    cout << "Input please b number: ";
    cin >> b;
    cout << "Input please c number: ";
    cin >> c;

    cout <<endl;

    D = pow(b, 2)-4*a*c;
    sqrtD = sqrt(D);

    cout << "The discriminant is: " << D << endl;
    cout << endl;

    if (D>0){
            cout << "here";
        x1 = (-b-sqrtD)/(2*a);
        x2 = (-b+sqrtD)/(2*a);
        cout << "Then X1 is: " << x1 << endl;
        cout << "And X2 is: " << x2 << endl;
    }else if(D == 0){
        x1 = (-b+sqrtD)/(2*a);
        cout << "Then X1=X2= " << x1 << endl;
    }else cout << "Unfortunately, discriminant is less than or equals 0..." << endl;
}
