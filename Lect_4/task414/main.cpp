#include <iostream>

using namespace std;

int main()
{
    cout << "Enter some words please: ";
    char str[500];
    cin.getline(str, 500);
    char alpha[26]={'A','B','C','D','E','F','G','H','I','G','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int cntr=0, word=0;
    int curr[26];

    while(cntr<26){
        curr[cntr]=0;
        cntr++;
    }

    cntr=0;
    while(str[cntr]!=NULL){

        if(str[cntr]>='a' && str[cntr]<='z'){
            str[cntr]-=32;
        }
    cntr++;
    }

    cntr=0;
    while(str[cntr]!=NULL){
        curr[str[cntr]-65]++;
        cntr++;
    }

    for(int cntr=0; cntr<26; cntr++){

        for(int counter=0; counter<25; counter++){
            if(curr[counter]<curr[counter+1]){
                word=curr[counter];
                curr[counter]=curr[counter+1];
                curr[counter+1]=word;
                word=alpha[counter];
                alpha[counter]=alpha[counter+1];
                alpha[counter+1]=word;
            }
        }
    }

    cntr=0;

    while(cntr<26){

        if(curr[cntr]>0){
        cout<<alpha[cntr]<<" - "<<curr[cntr]<<endl;
        }
        cntr++;
    }
}
