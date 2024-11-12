#include <iostream>
using namespace std;

int main () {
    int n, m;
    cin >> n >> m;
    int matrix[n][m];
    int transpos[m][n];
    int balik[m][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j]; // Fixed input operator
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transpos[i][j] = matrix[j][i];
        }
    }

    //membalikkan baris
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            balik[i][j] = transpos[i][n-j-1];
            cout << balik[i][j] << " ";
        }
        cout << endl;
    }
}