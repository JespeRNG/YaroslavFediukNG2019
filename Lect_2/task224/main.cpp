#include <iostream>

using namespace std;

int main()
{
    int ask=0;
    int counter=0, counterinho, maximum=0;

    cout<<"How many columns do u want to have ?: ";
    cin>>ask;
    int *a = new int[ask];

    while (counter<ask){
        cout << "Stars per " << counter + 1 << " column: ";
        cin >> a[counter];
        counter++;
    }

    counter=0;

    while (counter < ask){
        if (maximum < a[counter]){
            maximum=a[counter];
        }
        counter++;
    }

    counter=0;

    while (counter< maximum){

        counterinho=0;

        while (counterinho<ask){
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
