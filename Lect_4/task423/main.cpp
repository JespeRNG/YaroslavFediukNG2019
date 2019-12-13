#include <iostream>

using namespace std;

int main()
{
    char str1[50], str2[50];
    int i=0, j=0;


    cout << "Input please the first string: ";
    cin.getline(str1, 50);

    cout << "Now, input please the second string: ";
    cin.getline(str2, 50);

    while(str1[i] != NULL)
    {
        while(str2[j] != NULL)
        {
            if(str1[i] == str2[j])
                str1[i] = ' ';
            j++;
        }
        j = 0;
        i++;
    }

    cout << endl << "The result is: " << str1 << endl;
}
