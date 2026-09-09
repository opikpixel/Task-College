#include <iostream>
using namespace std;

int main() {
  int jumlah_sapi_A = 123;
  int jumlah_sapi_B = 98;
  int jumlah_kambing= 76;
  int berat_sapi_A = 350;
  int berat_sapi_B = 300;
  int berat_kambing = 30;
  float total_daging=0;
  int total=0;
  int pilihan;
  int i=0;
  int n = 3;

  cout << "=====Program Menghitung Total Daging Kurban=====" << endl;
  cout << "            ===== 3 Hewan Kurban =====" << endl;
  cout << " Berat Badan Sapi A: " << berat_sapi_A << " Kg" << endl;
  cout << " Berat Badan Sapi B: " << berat_sapi_B << " Kg" << endl;
  cout << " Berat Badan Kambing: " << berat_kambing << " Kg" << endl;
  cout << endl;
  cout << " Jumlah Sapi A : " << jumlah_sapi_A << " ekor" << endl;
  cout << " Jumlah Sapi B : " << jumlah_sapi_B << " ekor" << endl;
  cout << " Jumlah Kambing : " << jumlah_kambing << " ekor" << endl;
  cout << endl;

  for (i = 0; i < n; i++) {
    cout << endl;
    cout << "===== Pilihan Hewan Kurban Ke " << i + 1 << "=====" << endl;
    cout << "1. Sapi A\n";
    cout << "2. Sapi B\n";
    cout << "3. Kambing\n";
    cout << endl;
    cout << "Masukkan Pilihan: ";
    cin >> pilihan;

    switch (pilihan) {
    case 1:
      total = berat_sapi_A * jumlah_sapi_A;
      break;
    case 2:
      total = berat_sapi_B * jumlah_sapi_B;
      break;
    case 3:
      total = berat_kambing * jumlah_kambing;
      break;
    default:
      cout << "Salah Pilihan!\n";
      break;
    }
    cout << "Total Daging Ke " << i + 1 << ": " << total << " Kg" << endl;
    total_daging += total;
  }
  cout << endl;
  cout << "Total Daging: " << total_daging << " Kg";
  cout << endl;

  system("pause");
  return 0;
}