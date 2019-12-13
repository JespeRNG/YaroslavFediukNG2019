#include <iostream>

using namespace std;

int main()
{
    char sent[50];
    int i = 0, words = 0;
    bool isspace = true;

    cout << "Input your sentence please: ";
    cin.getline(sent, 50);

    while(sent[i] != NULL)
    {
        if(sent[i] == ' ')
            isspace = true;
        else if(isspace)
        {
            words++;
            isspace = false;
        }
        i++;
    }

    cout << "\nSo, there are " << words << " words in your sentence :)\n";

    return 0;
}
