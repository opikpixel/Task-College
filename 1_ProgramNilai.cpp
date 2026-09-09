#include <iostream> 
using namespace std;

// Fungsi Hitung Nilai Akhir Menggunakan Bobot
float hitung_nilai_akhir (int nilai_soft_skill, int nilai_tugas_mandiri, int nilai_tugas_terstruktur, int nilai_UTS, int nilai_UAS){
    // Deklarasi Variabel Bobot Nilai
    float bobot_soft_skill = 5/100.0;
    float bobot_tugas_mandiri = 10/100.0;
    float bobot_tugas_terstruktur = 20/100.0;
    float bobot_UTS = 30/100.0;
    float bobot_UAS = 35/100.0;

    // Proses Menghitung Nilai Akhir
    float nilai_akhir = (nilai_soft_skill * bobot_soft_skill) + (nilai_tugas_mandiri * bobot_tugas_mandiri) + (nilai_tugas_terstruktur * bobot_tugas_terstruktur) + (nilai_UTS * bobot_UTS) + (nilai_UAS * bobot_UAS);

    // Tampilkan Nilai Akhir
    cout << "Nilai Akhir: " << nilai_akhir << endl;
    // Mengembalikan Nilai Akhir ke fungsi main
    return nilai_akhir;
}

// Fungsi Hitung Grade Huruf
void hitung_grade (float nilai_akhir) {
    // Deklarasi Variabel Grade Huruf
    char grade;
    
    // Proses Menghitung Grade Berdasarkan Nilai Akhir
    if (nilai_akhir >= 80) {
        grade = 'A';
    } else if (nilai_akhir >= 70) {
        grade = 'B';
    } else if (nilai_akhir >= 55) {
        grade = 'C';
    } else if (nilai_akhir >= 45) {
        grade = 'D';
    } else {
        grade = 'E';
    }

    // Tampilkan Grade
    cout << "Grade: " << grade << endl;
}

int main () {
    // Deklarasi Variabel Nama dan Nilai
    string nama;
    int nilai_soft_skill;
    int nilai_tugas_mandiri;
    int nilai_tugas_terstruktur;
    int nilai_UTS;
    int nilai_UAS;
    float nilai_akhir;
    char grade;
    char pilihan;
    

    // Header
    cout << "=================================" << endl;
    cout << "   Program Penilaian Mahasiswa " << endl;
    cout << "=================================" << endl;
    cout << "Bobot Penilaian: " << endl;
    cout << "Soft Skill: 5%" << endl;
    cout << "Tugas Mandiri: 10%" << endl;
    cout << "Tugas Terstruktur: 20%" << endl;
    cout << "UTS: 30%" << endl;
    cout << "UAS: 35%" << endl;
    cout << "=================================" << endl;
    cout << " Tabel Grade: " << endl;
    cout << " >=80 : A" << endl;
    cout << " 70-79 : B" << endl;
    cout << " 55-69 : C" << endl;
    cout << " 45-54 : D" << endl;
    cout << " <45 : E" << endl;
    cout << "=================================" << endl;

    while (true) {
        // Input Nama Mahasiswa
        cout << "Masukkan Nama Mahasiswa (Satu kata): ";
        cin >> nama;

        // Input Nilai
        cout << "Masukkan Nilai Soft Skill: ";
        cin >> nilai_soft_skill;
        cout << "Masukkan Nilai Tugas Mandiri: ";
        cin >> nilai_tugas_mandiri;
        cout << "Masukkan Nilai Tugas Terstruktur: ";
        cin >> nilai_tugas_terstruktur;
        cout << "Masukkan Nilai UTS: ";
        cin >> nilai_UTS;
        cout << "Masukkan Nilai UAS: ";
        cin >> nilai_UAS;
        
        // Panggil Fungsi Hitung Nilai Akhir
        nilai_akhir = hitung_nilai_akhir(nilai_soft_skill, nilai_tugas_mandiri, nilai_tugas_terstruktur, nilai_UTS, nilai_UAS);
        
        // Panggil Fungsi Hitung Grade
        hitung_grade(nilai_akhir);

        // Pilihan Menambah Mahasiswa
        cout << "---------------------------------" << endl;
        cout << "Tambah Mahasiswa (y/n)? : ";
        cin >> pilihan;
        if (pilihan == 'n' || pilihan == 'N') {
            cout << "                           " << endl;
            break;
        }
        cout << "                           " << endl;
    }
    cout << "Terima kasih sudah menggunakan program ini" << endl;
    // Perintah Jeda
    system ("pause");
    return 0;
}