#include <iostream>
#include <string>
using namespace std;

int main () {
    string S, T;
    cin >> S >> T;

    //menghapus string T dari string S
    while (S.find(T) != string::npos) {
        S.erase(S.find(T), T.length());
    }
    cout << S << endl;
}