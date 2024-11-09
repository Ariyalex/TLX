#include <iostream>
#include <cmath>
using namespace std;

int main () {
    long long N;
    cin >> N;

    int NK = sqrt(N);
    long long r_terbaik = 1;
    long long c_terbaik = N;

    for (int r = 1; r <= NK; r++) {
        if (N % r == 0) {
            long long c = N/r;
            if (abs(c - r) < abs(c_terbaik - r_terbaik)) {
                r_terbaik = r;
                c_terbaik = c;
            }
        }
    }
    cout << r_terbaik << " " << c_terbaik << endl;

}

//jika r * c = N, r <= c, maka nilai maksumum r adalah akar kuadrat dari N 
//maka cukup mencari nilai r sampai sqrt(N) saja