#include <iostream>
#include <cmath>
using namespace std;

void pegunungan (int x) {
    if (x == 1) {
        cout << "*" << endl;
    } else {
        pegunungan(x-1);
        for (int i = 0; i < x; i++) {
            cout << "*";
        }
        cout << endl;
        pegunungan(x-1);
    }
}

int main () {
    int N;
    cin >> N;

    pegunungan(N);

    //kode di bawah sama, tapi pakai loop dan gw ga paham
    // for(int i = 1;i < pow(2 , N);i++){
    //     for(int j = 0;j < N;j++){
    //         if(i % static_cast<int>(pow(2 , j)) == 0){
    //             cout<<'*';
    //         }
    //     }
    //     cout<<endl;
    // }

    //ini adalah versi yang lebih efisien dari kode di atas, dan juga mudah dipahami
    //ini mengganti pow dengan pergeseran bit (<<) yang setara denga 2^j
    // int limit = 1 << N;  // Sama dengan 2^N
    // for (int i = 1; i < limit; i++) {
    //     for (int j = 0; j < N; j++) {
    //         if (i % (1 << j) == 0) {  // Menggunakan pergeseran bit untuk 2^j
    //             cout << '*';
    //         }
    //     }
    //     cout << endl;
    // }
}