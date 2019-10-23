#include <iostream>

using namespace std;

int main()
{
    int shish, nuts, need_nuts;

    cout << "Belochka sobrala shishek: ";
    cin >> shish;

    do{
        cout << "Belochka sobrala oreshkov iz shishek: ";
        cin >> nuts;
    }while (nuts > shish);

    cout << "Belochke nuzhno oreshkov dlya zhizni: ";
    cin >> need_nuts;

    cout <<endl;

    if (nuts < need_nuts){
        cout << "NO";
    }else cout << "YES\n";

}
