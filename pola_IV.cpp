#include <iostream>
using namespace std;

int main () {
    int N;
    cin >> N;
    int pola[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int start = 0;

    for (int i = 0; i < N; i++) {
        int count = 0;
        for (int j = start; count <= i; j++) {
            cout << pola[j % 10];
            count++;
        }
        start += (i + 1);
        cout << endl;
    }
}