#include <iostream>
#include <vector>
using namespace std;

int main () {
    int N;
    cin >> N;
    if (N < 1 || N > 100) {
        return 0;
    }
    vector<int> data;
    int x;
    long long total = 0;
    for (int i = 0; i < N; i++) {
        cin >> x;
        total += x;
        data.push_back(x);
        
    }

    for (int i = 0; i < N; i++) {
            cout << total - data[i] << endl;
        }
}