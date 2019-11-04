#include <iostream>

using namespace std;

int main()
{
    char sentence[100];
    int i = 0;

    cout << "Enter please your sentence: ";
    cin.getline(sentence, 100);

    while (sentence[i] != NULL){
        if (sentence[i] >= 'a' && sentence[i] <= 'z') { cout << char(sentence[i]-32);
        }else cout << sentence[i];
        i++;
    }

    cout << endl;
}
