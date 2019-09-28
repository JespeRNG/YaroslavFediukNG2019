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
                cout << "YES" << endl;
            }else cout << "NO";
        }
    }else cout << "NO" << endl;

}
