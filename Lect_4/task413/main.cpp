#include <iostream>

using namespace std;

int main()
{
    char sentence[100];
    int i = 0, n = 0;
    char alpha[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M',
    'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    cout << "Enter your sentence please: ";
    cin.getline(sentence, 100);

    while (sentence[i] != NULL){
        if (sentence[i] == ' ' || sentence[i] == ',' || sentence[i] == '.' || sentence[i] >= 62 && sentence[i] <= 90){
        }else sentence[i] = int(sentence[i])-32;

        i++;
    }

    cout << endl;

    while (n < i){
        cout << sentence[n];
        n++;
    }

    cout << endl;
}
