#include <iostream>

using namespace std;

int main()
{
    char sent[50];
    int i=0, n=0;
    int dif=0;
    int largest=0;

    cout << "Input please a sentence: ";
    cin.getline(sent,100);

    while (sent[i]!=NULL)
    {
        if ((sent[i]>='a' && sent[i]<='z') || (sent[i]>='A' && sent[i]<='Z'))
            n++;
        else {
            if (n > largest)
            {
                largest = n;
                dif = i-largest;
            }
            n = 0;
        }

        if (sent[i+1]==0)
        {
            if (n > largest && sent[i+1]==0)
            {
                largest = n;
                dif = i-largest;
            }
            n=0;
        }
        i++;
    }

    cout << endl << "The largest word is: ";

    for (i=0;i < largest;i++)
    {
        cout << sent[dif];
        dif++;
    }

    cout << endl;
}
