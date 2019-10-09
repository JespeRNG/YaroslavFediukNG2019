#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char sentence[100];
    int i = 0;
    int word_cnt = 0;
    int sent_l = 0;

    cout << "Input please a sentence: ";
    cin.getline(sentence, 100);

    int space_cnt = 0;

    if (sentence != NULL){
        word_cnt = 1;
    }

    while (sentence[i] != NULL){
        if (sentence[i] == ' '){
            ++word_cnt;
        }

        if (sentence == NULL){
            word_cnt = 0;
        }

        if (sentence[i] == ' ' && sentence[i-1] == ' '){
            space_cnt++;
        }

        i++;
    }

    word_cnt = word_cnt - space_cnt - 1;

    if (word_cnt > 0){
        if (word_cnt > 1){
            cout << "\nThere are: " << word_cnt << " words in your sentence!\n";
        }

        if (word_cnt == 1){
            cout << "\nThere is 1 word in your sentence!\n";
        }

    }else cout << "\nThere isn't any word in your sentence!\n";
}
