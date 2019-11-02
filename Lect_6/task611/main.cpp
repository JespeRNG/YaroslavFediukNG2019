#include <iostream>
#include <string>

using namespace std;

class constr {
private:
    char sentence[100], letter;
    int key;

public:
    void setSentence(){
        cout << "Enter please a sentence: ";
        cin.getline(sentence, 100);
    }
    void setKey(){ cout << "Now, enter please a key for cypher: "; cin >> key; }

    int getCaesarEncrypt() {
        for (int i=0; i < 100; i++){
            letter = sentence[i];

            if (sentence[i] >= 'a' && sentence[i] <= 'z'){
                letter += key;

                if (letter > 'z') letter = letter - 'z' + 'a' - 1;

            } else if (sentence[i] >= 'A' && sentence[i] <= 'Z'){
                letter += key;

                if (letter > 'Z') letter = letter - 'Z' + 'A' - 1;
            }
            sentence[i] = letter;
        }
        cout << "Encrypted sentence: " << sentence;
    };

    int getCaesarDecrypt() {
        for (int i=0; i < 100; i++){
            letter = sentence[i];

            if (letter >= 'a' && letter <= 'z'){
                letter -= key;

                if (letter < 'a'){
                    letter = letter + 'z' - 'a' + 1;
                }
            }else if(letter >= 'A' && letter <= 'Z'){
                letter -= key;

                if (letter < 'A'){
                    letter = letter + 'Z' - 'A' + 1;
                }
            };
            sentence[i] = letter;
        }
        cout << "Decrypted sentence: " << sentence;
    }
};

int main()
{   
    constr cyp;
    int choice;

    cyp.setSentence();
    cyp.setKey();

    cout << endl;
    cout << "Do you want to encrypt(1) or to decrypt(0) your message: ";
    cin >> choice;
    cout << endl;

    if (choice == 1){
        cyp.getCaesarEncrypt();
    }else if (choice == 0) cyp.getCaesarDecrypt();

    cout << endl <<endl;
}

