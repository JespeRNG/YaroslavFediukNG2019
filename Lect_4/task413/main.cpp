#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char sentence[100];
    int SENTENCE[100];
    int i = 0, cnt = 0;
    int a = 97;

    /**char b = char(a);

    cout << b;**/

    cout << "Input please a sentence: ";
    cin.getline(sentence, 100);

    while (sentence[i] != NULL){

        if (sentence[i] != ' ' || sentence[i] != NULL){
            SENTENCE[i] = int(sentence[i])-32;

        }

        if (sentence[i] == ' '){
            SENTENCE[i] = int(sentence[i]);
        }

        i++;
        cnt++;
    }

    i = 0;

    cout << endl;

    while (i < cnt){
        cout << char(SENTENCE[i]);
        i++;
    }

    cout << endl;
}
