#include <iostream>
#include <math.h>

using namespace std;

void sum(int a, int b){
    cout << endl;
    cout << "Sum = " << a+b << ";" << endl;
}

void dif(int a, int b){
    int dif = a - b;

    if (dif < 0){
        cout << "Dif = ERROR. a < b"<<";"<<endl;
    }else cout << "Dif = " << dif << ";" << endl;;
}
void division(double a, double b){
    cout << "Division = " << a/b <<";"<< endl;
}

void multi(int a, int b){
    cout << "Multiply = " << a*b << ";" << endl;
}

void root(double a, double b){
    cout << "Sqrt(a) = " << sqrt(a) << " and Sqrt(b) = " << sqrt(b) << ";"<< endl;
}

void power(int a, int b, int pow){
    int res_a = a;
    int res_b = b;

    if (pow == 0){
        res_a = 1;
        res_b = 1;
    }else{
        for (int i=1; i < pow; i++){
            res_a = res_a * a;
            res_b = res_b * b;
        }
    }

    cout << "a^" << pow <<" = " << res_a << " and b^" <<pow << " = " <<  res_b << ";"<< endl;
}

int main()
{
    int a,b,pow;

    cout << "Enter please a: ";
    cin >> a;
    cout << "Enter please b: ";
    cin >> b;

    sum(a,b);
    dif(a,b);
    multi(a,b);
    division(a,b);
    root(a,b);

    cout << endl;

    cout << "To count the power of a and b you should enter the digit of power: ";
    cin >> pow;
    cout << endl;

    power(a,b,pow);
}
