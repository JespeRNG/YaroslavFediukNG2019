#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char buffer[100];
    short j = 0, check = 0;
    short counter = 0;

    cout << "Input please a sentence > ";
    cin.getline(buffer, 100);

    //char *output = new char [strlen(buffer)];
    char output[100];

    for (int i=0; i < 100; i++)
    {
        output[i] = NULL;
    }

    for(int i=0; i < strlen(buffer); i++)
    {
        if(buffer[i] == ' ')
        {
            check++;
            if ( check == 1 )
            {
                output[j] = ' ';
                //j++;
            }
            if (check > 1)
            {
                continue;
            }
        }else{
            output[j] = buffer[i];
            check = 0;
        }
        j++;
    }
    cout << endl << "Your valid sentence > " << output << endl;
}
