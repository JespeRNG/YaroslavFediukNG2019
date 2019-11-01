#include <iostream>

using namespace std;

int main()
{
    int ask=0;
    int counter=0, counterinho, maximum=0;
    int a[5];

    while (counter < 5){
        cout << "Stars per " << counter + 1 << " column: ";
        cin >> a[counter];
        counter++;
    }

    counter=0;

    while (counter < 5){
        if (maximum < a[counter]){
            maximum = a[counter];
        }
        counter++;
    }

    counter=0;

    while (counter < maximum){

        counterinho=0;

        while (counterinho < 5){
            if(counter<a[counterinho]){
                cout<<"*";
            }else{
                cout<<" ";
            }
            counterinho++;
        }
        cout<<endl;
        counter++;
    }
}
