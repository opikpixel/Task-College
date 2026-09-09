#include <iostream>
#include <limits>
using namespace std;

int main() {
    int jumlah_jiwa;
    int harga_beras= 20000;
    int bayar;
    float berat_beras = 2.7;
    float total_beras;
    float total_uang;
    char ulang;

    cout << "=== Program Pembayaran Zakat Fitrah - C++ ===" << endl;
    cout << "Tiap Jiwa Wajib Mengeluarkan Zakat Fitrah Sebesar 2.7 Kg Beras atau Sebesar 20.000 Rupiah" << endl;
    cout << endl;
    do {
        do {
            cout << "> Masukkan Jumlah Jiwa Yang Ingin Dibaya: ";

            if (!(cin >> jumlah_jiwa) || jumlah_jiwa <= 0){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "=== Error: Yang Bener Ketiknya! ===" << endl;
                jumlah_jiwa= 0;
            } else {
                cout << "   Jumlah Jiwa: " << jumlah_jiwa << endl;
                cout << endl;
            }
        } while (jumlah_jiwa <= 0);

        do {
            cout << "> Pilih Jenis Pembayaran: " << endl;
            cout << "   1. Beras" << endl;
            cout << "   2. Uang" << endl;
            cout << "  Masukkan Pilihan(1/2): ";

            if (!(cin >> bayar) || bayar != 1 || bayar != 2 ){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "=== Error: Yang Bener Ketiknya! ===" << endl;
                break;
            } else {
                break; 
            }
        } while (bayar != 1 || bayar != 2 );

        switch (bayar){
            case 1:
                total_beras = berat_beras * jumlah_jiwa;
                cout << "=== JENIS PEMBAYARAN: BERAS ===" << endl;
                cout << "- Jumlah Jiwa: " << jumlah_jiwa << endl;
                cout << "- Berat Beras: " << berat_beras << " Kg" << endl;
                cout << "- Total Beras: " << total_beras << " Kg" << endl;
                break;

            case 2:
                total_uang = harga_beras * jumlah_jiwa;
                cout << "===JENIS PEMBAYARAN: UANG ===" << endl;
                cout << "- Jumlah Jiwa: " << jumlah_jiwa << endl;
                cout << "- Harga Beras: " << harga_beras << " Rupiah" << endl;
                cout << "- Total Uang: " << total_uang << " Rupiah" << endl;
                break;
        }
        cout << endl;
        cout << "=== Program Selesai ===" << endl;

        do {
            cout << "> Gas mencoba lagi ? (y/n)";
            cin >> ulang;
            if (ulang == 'Y' || ulang == 'y'){
                break;
            } else if  (ulang == 'N' || ulang == 'n') {
                system("pause");
                return 0;
            } else {
                cout << "Y dan N doang ya ketiknya" << endl;
                break;
            }
        } while (ulang != 'Y'|| ulang != 'y' );

    } while (ulang == 'Y'|| ulang == 'y');

system ("pause");
return 0;
}
