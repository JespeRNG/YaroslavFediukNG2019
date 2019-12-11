#include <iostream>

using namespace std;

int main()
{
    char sent[100];
    int i=0;

    for (int i=0;i<100;i++)
        sent[i]=0;

    cout << "Input any word please: ";
    cin.getline(sent,100);

    cout << endl;

    while(sent[i] != NULL)
        i++;

    for(int j=0;j <= i; j++)
    {
        if(sent[j] == sent[i-1] || i == j)
        {
            if(j == i-1 && sent[i-1] == sent[j])
                cout << "This word is a palindrome !" << endl;
        }
        else{
            cout << "This word isn't a palindrome !" << endl;
            break;
        }
        i--;
    }
}
