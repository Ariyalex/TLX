#include <iostream>
#include <vector>
using namespace std;

int main () {
    int Q;
    vector<int> bilangan;
    cin >> Q;

    //masukkan bilangan ke dalam vector
    for (int i = 0; i < Q; i++) {
        int x;
        cin >> x;
        bilangan.push_back(x);
    }

    //loop pengecekan vector bilangan
    for (int i = 0; i < Q; i++) {
        if (bilangan[i] == 1) {
            cout << "BUKAN" << endl;
        } else {
            //loop pengecekan bilangan prima
            bool prima = true;
            for (int j = 2; j*j <= bilangan[i]; j++) {
                if (bilangan[i] % j == 0) {
                    prima = false;
                    break;
                } else {
                    prima = true;
                }
            }
            if (prima) {
                cout << "YA" << endl;
            } else {
                cout << "BUKAN" << endl;
            }
        }
    }
}