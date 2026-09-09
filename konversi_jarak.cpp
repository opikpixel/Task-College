#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int v;
  int t;
  int s;

  cout << "Masukkan Kecepatan (Meter/Detik) : ";
  cin >> v;
  cout << "Masukkan Waktu (Detik) : ";
  cin >> t;
  s = v * t;
  cout << "Jarak : " << s << " Meter" << endl;
  system("pause");
  return 0;
}