#include <iostream>
using namespace std;

// Fungsi Sorting untuk mengurutkan data penjualan
void Sorting (int penjualan[]) {
    cout << "Data Penjualan Terkecil ke Terbesar" << endl;
    cout << "----------------------------------" << endl;
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7 - i - 1; j++) {
            if (penjualan[j] > penjualan[j + 1]) {
                int temp = penjualan[j];
                penjualan[j] = penjualan[j + 1];
                penjualan[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 7; i++) {
        cout << penjualan[i] << endl;
    }
    
}

int main () {
    // Deklarasi variabel array
    int penjualan[7]= {120, 150, 135, 180,175, 160, 140 };
    
    // Deklarasi variabel lainnya
    float total_penjualan;
    float rata_rata_penjualan;
    int penjualan_tertinggi;
    int penjualan_terendah;

    // Header
    cout << "===== Program Data Penjualan Kelontong =====" << endl;
    cout << endl;
    
    // Menampilkan Data Penjualan
    for (int i = 0; i < 7; i++) {
        cout << "Penjualan hari ke " << i + 1 << ": " << penjualan[i] << endl;
        // Menghitung Total Penjualan
        total_penjualan += penjualan[i];
    }
    cout << "__________________________________" << endl;
    cout << "Total Penjualan: " << total_penjualan << endl;
    
    // Menghitung Rata-rata Penjualan
    rata_rata_penjualan = total_penjualan / 7;
    cout << "Rata-rata Penjualan: " << rata_rata_penjualan << endl;

    // Proses Bubble Sort
    // Mencari Penjualan Tertinggi
    penjualan_tertinggi = penjualan[0];
    for (int i = 1; i < 7; i++) {
        if (penjualan[i] > penjualan_tertinggi) {
            penjualan_tertinggi = penjualan[i];
        }
    }
    cout << "Penjualan Tertinggi: " << penjualan_tertinggi << endl;

    // Mencari Penjualan Terendah
    penjualan_terendah = penjualan[0];
    for (int i = 1; i < 7; i++) {
        if (penjualan[i] < penjualan_terendah) {
            penjualan_terendah = penjualan[i];
        }
    }
    cout << "Penjualan Terendah: " << penjualan_terendah << endl;
    cout << endl;
    
    // Memanggil Fungsi Sorting
    Sorting(penjualan);
    
    // Perintah Jeda
    system("pause");
    return 0;
    
}