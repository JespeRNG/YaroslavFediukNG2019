#include <iostream>

using namespace std;

int main()
{
    int N, M, K;

    cout << "Belochka sobrala shishek: ";
    cin >> N;

    cout << "Belochka sobrala oreshkov iz shishek: ";
    cin >> M;

    cout << "Belochke nuzhno oreshkov dlya zhizni: ";
    cin >> K;
    cout <<endl;

    if (N > 0 || M > N || M < K){
        if (M <= N){
            if (M >= K){
                cout << "Belochka provedet otlichnuyu zimu :D" << endl;
            }else cout << "Oreshkov bol'she, chem shishek :(";
        }
    }else cout << "U belochki proizoshel bug" << endl;

}
