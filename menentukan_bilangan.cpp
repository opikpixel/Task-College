#include <iostream> // Memasukkan library iostream untuk input dan output
using namespace std; // Menggunakan namespace std

int main(){
    int bilangan; // input bilangan
    int hasil_bagi; // hasil bagi
    int sisa_bagi; // sisa bagi

    cout << "=========================\n";
    cout << "PROGRAM MENENTUKAN BILANGAN GENAP DAN GANJIL\n"; 
    cout << "=========================\n";

    cout << "Masukkan Bilangan : "; // Input bilangan
    cin >> bilangan; 

    hasil_bagi = bilangan / 2; // Operasi mendapatkan hasil bagi
    sisa_bagi = bilangan - (hasil_bagi * 2); // Operasi mendapatkan sisa bagi

    cout << "===========================\n";
    
    if (sisa_bagi=0){ // Penentuan Bilangan Genap atau Ganjil dengan Selection IF
        cout << "Bilangan Genap" << endl; // Output Bilangan Genap jika sisa bagi 0
    }
    else{
        cout << "Bilangan Ganjil" << endl; // Output Bilangan Ganjil jika sisa bagi bukan 0
    }

    system("pause"); // Perintah untuk menghentikan program sementara
    return 0; // Mengembalikan nilai 0
}