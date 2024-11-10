#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main () {
    int N, D;
    vector<int> kedekatan;
    cin >> N >> D;
    int T[N][N], X[N], Y[N];

    //untuk masukkan nilai x dan y berdasar jumlah n
    for (int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
    }

    //untuk menghitung kedekatan antara x dan y
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j || i > j) {
                continue;
            } else {
                T[i][j] = pow(abs(X[i] - X[j]), D) + pow(abs(Y[i] - Y[j]), D);
            }
            kedekatan.push_back(T[i][j]);
        }
    }

    //untuk menampilkan kedekatan terkecil dan terbesar
    int min = kedekatan[0], max = kedekatan[0];
    for (int i = 0; i < kedekatan.size(); i++) {
        if (kedekatan[i] < min) {
            min = kedekatan[i];
        }
        if (kedekatan[i] > max) {
            max = kedekatan[i];
        }
    }
    cout << min << " " << max << endl;
}