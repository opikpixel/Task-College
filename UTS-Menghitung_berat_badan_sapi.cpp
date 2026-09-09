#include <iostream>
using namespace std;

int main() {
  float LD, BB;

  cout << "=====Program Menghitung Berat Badan Sapi Menggunakan Rumus Schoorl Denmark====="<< endl;
  cout << "Masukkan Nilai Lingkar Dada (cm): ";
  cin >> LD;

  BB = (LD + 22) * (LD + 22) / 100;
  cout << "\nProses Perhitungan : " << endl;
  cout << "(" << LD << " + 22) * (" << LD << " + 22) / 100 = " << BB << " Kg";
  cout << endl;
  cout << "\nBerat Badan Sapi: " << BB << " Kg";
  cout << endl;

  system("pause");
  return 0;
}