#include <iostream>
#include <string>
using namespace std;

string dekripsi(string encrypted, int k) {
    string decrypted = "";
    for (char ch : encrypted) {
        // Geser karakter ke kiri sebanyak k
        char original_char = (ch - 'a' - k + 26) % 26 + 'a';
        decrypted += original_char;
    }
    return decrypted;
}

int main() {
    int k;
    string encrypted = "epctxlvldtsdpxzrlvfcdfdtytmpcxlyqlle";

    cout << "Masukkan nilai k: ";
    cin >> k;

    string decrypted = dekripsi(encrypted, k);
    cout << "String asli: " << decrypted << endl;

    return 0;
}
