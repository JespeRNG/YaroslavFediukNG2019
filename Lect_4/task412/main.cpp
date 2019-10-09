#include <iostream>

using namespace std;

int main()
{
    char str[500];
    cout<<"Input some words please: ";
    cin.getline(str, 500);
    int letter_i = 0, pos = 0, MaxPos = 0, Maxlength = 0;
    int i=0;

    while(str[i]!=NULL){
            if((str[i] >= 'a' && str[i] <= 'z')||(str[i] >= 'A' && str[i] <= 'Z')){
                letter_i++;
            }else{
                pos=i+1;
                letter_i=1;
            }

            if((str[i+1] != 'a' && str[i+1] != 'z')||(str[i+1] != 'A' && str[i+1] != 'Z') && str[i+1] != NULL){
                if ( Maxlength<letter_i ){
                    Maxlength=letter_i;
                    MaxPos=pos;
                }
            }
        i++;
    }

    cout << "The longest word: ";

    i=0;

    while(i < Maxlength){
        cout << str[MaxPos+i];
        i++;
    }
}
