#include <iostream>
using namespace std;

int fungsi (int a, int b, int x) {
    int f = abs(a*x + b);
    return f;
}

int main() {
    int a,b,x;
    int k;
    cin >> a >> b >> k >> x;
    for (int i = 0;i < k; i++) {
        x = fungsi(a,b,x);
    }
    cout << x << endl;
}