#include <iostream>
using namespace std;

int main() {
    // Array tinggi badan dalam cm
    int tinggi_badan[10] = {175, 165, 166, 157, 184, 156, 163, 176, 171, 169};

    int jumlah_data = sizeof(tinggi_badan) / sizeof(tinggi_badan[0]);
    int total = 0;

    for (int i = 0; i < jumlah_data; i++) {
        total += tinggi_badan[i];
    }

    float rata_rata = static_cast<float>(total) / jumlah_data;

    cout << "Rata-rata tinggi badan: " << rata_rata << " cm" << endl;

    return 0;
}
