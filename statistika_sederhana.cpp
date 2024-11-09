#include <iostream>
using namespace std;

int main () {
    int N;
    cin >> N;

    int bil_terbesar = -1000000;
    int bil_terkecil = 1000000;
     for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
            if (A > bil_terbesar) {
                bil_terbesar = A;
            }
            if (A < bil_terkecil) {
                bil_terkecil = A;
            }
    }
    cout << bil_terbesar << " " << bil_terkecil << endl;
}