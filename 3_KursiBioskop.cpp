#include <iostream>
using namespace std;

// Fungsi untuk menampilkan Denah Kursi
void tampilkan_kursi(int kursi[5][6]) {
    cout << endl;
    cout << "  Kolom: 1 2 3 4 5 6" << endl;
    cout << "  -------------------" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Baris " << i + 1 << ": ";
        for (int j = 0; j < 6; j++) {
            cout << kursi[i][j] << " ";
        }
        cout << endl;
    }
    cout << "  -------------------" << endl;
}

// Fungsi untuk memesan kursi
// Mengembalikan true jika pemesanan berhasil, false jika gagal
bool pesan_kursi(int kursi[5][6], int baris, int kolom) {
    // Validasi input baris (1-5) dan kolom (1-6) 
    if (baris < 1 || baris > 5 || kolom < 1 || kolom > 6) {
        cout << endl;
        cout << "Error: Nomor baris (1-5) atau kolom (1-6) tidak valid!" << endl;
        return false;
    }

    // Mengubah input baris dan kolom menjadi indeks array (0-4 dan 0-5)
    int b = baris - 1;
    int k = kolom - 1;

    // Cek apakah kursi sudah dipesan atau tersedia
    if (kursi[b][k] == 1) {
        cout << "Gagal: Kursi pada Baris " << baris << ", Kolom " << kolom << " sudah dipesan!" << endl;
        return false;
    } else {
        kursi[b][k] = 1; 
        cout << "Sukses: Kursi pada Baris " << baris << ", Kolom " << kolom << " berhasil dipesan!" << endl;
        return true;
    }
}

int main () {
    // Inisialisasi status kursi bioskop 
    // Data Kursi pakai Array 2 Dimensi
    // 0 = kosong, 1 = sudah dipesan
    int kursi_bioskop[5][6] = {
        {0, 0, 1, 0, 0, 0},
        {0, 1, 0, 0, 0, 1},
        {0, 0, 0, 0, 1, 0},
        {1, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0}
    };
    
    // Deklarasi Variabel
    int baris, kolom;
    char pilihan;
    
    // Header Program
    cout << "========================================" << endl;
    cout << "    PROGRAM PEMESANAN KURSI BIOSKOP     " << endl;
    cout << "========================================" << endl;
    cout << "Keterangan Status Kursi:" << endl;
    cout << "0 = Kosong & Tersedia" << endl;
    cout << "1 = Sudah Dipesan & Penuh" << endl;

    // Looping untuk memesan kursi
    while (true) {
        // Menampilkan Denah Kursi
        cout << endl;
        cout << "--- Denah Kursi Saat Ini ---" << endl;
        tampilkan_kursi(kursi_bioskop);
        
        // Meminta Input Baris dan Kolom
        cout << endl;
        cout << " Silahkan masukkan nomor kursi yang kosong" << endl;
        cout << "Masukkan Baris (1-5): ";
        cin >> baris;
        cout << "Masukkan Kolom (1-6): ";
        cin >> kolom;
        cout << "-------------------------------" << endl;
        // Proses pemesanan kursi
        pesan_kursi(kursi_bioskop, baris, kolom);

        // Menampilkan denah kursi terbaru 
        cout << "\n--- Denah Kursi Terbaru ---" << endl;
        tampilkan_kursi(kursi_bioskop);

        // Pilihan untuk memesan lagi
        cout << "\nApakah ingin memesan kursi lain? (y/n): ";
        cin >> pilihan;
        if (pilihan == 'n' || pilihan == 'N') {
            break;
        }
    }

    cout << "\nTerima kasih!" << endl;
    
    // Perintah Jeda
    system("pause");
    return 0;
}
