#include <iostream>
using namespace std;

int main() {
    int jarak = 21;
    int A = 7;
    int B = 14;
    int C = 21;
    double kec_A, kec_B, kec_C;
    double total_waktu;
    string start;

    cout << "=====Program Menghitung Waktu Finish Estafet Half Marathon=====" << endl;
    cout << "\nINFORMASI : Jarak Tempuh 21 Km dengan estafet bergilir antar 3 pelari. Pelari A berlari menempuh 7 KM, dilanjut Pelari B berlari dari KM 7 hingga KM 14, dan Pelari C berlari dari KM 14 hingga KM 21" << endl;
    cout << endl;

    cout << "Masukkan kecepatan rata-rata Pelari A (Km/Jam) : ";
    cin >> kec_A;

    cout << "Masukkan kecepatan rata-rata Pelari B (Km/Jam) : ";
    cin >> kec_B;

    cout << "Masukkan kecepatan rata-rata Pelari C (Km/Jam) : ";
    cin >> kec_C;

    cout << "Jalankan Marathon ? (Y/N) : ";
    cin >> start;

    while (start == "Y") {
    for (int i = 0; i<= 3;) {
        cout << i << "..." << endl;
        i += 1;
        if (i == 3) {
            cout << "Pelari A Berlari" << endl;
            break;
        }
    }

    for (int n = 0; n <= jarak;) {
        cout << n << "KM" << endl;
        if (n == A ) {
            cout << "Pelari A Berhenti dan Pelari B Berlari" << endl;
        } else if (n == B ) {
            cout << "Pelari B Berhenti dan Pelari C Berlari" << endl;
        } else if (n == C ) {
            cout << "Pelari C Berhenti dan Finish" << endl;
            break;
        }
        n += 1;
    }
    break;
    }

    total_waktu = (7.0 / kec_A) + (7.0 / kec_B) + (7.0 / kec_C);
    int jam = (int)total_waktu;
    int menit = (int)(total_waktu * 60) % 60;
    int detik = (int)(total_waktu * 3600) % 60;

    cout << "Total Waktu Finish : " << jam << " Jam " << menit << " Menit " << detik << " Detik" << endl;
    system("pause");
    return 0;
}