#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int a, b, c;

  cout << "Masukkan Bilangan Pertama : ";
  cin >> a;

  cout << "Masukkan Bilangan Kedua : ";
  cin >> b;

  cout << "Masukkan Bilangan Ketiga : ";
  cin >> c;

  if (a != b && a != c && b != c) {
    if (a > b && a > c && b > c) {
      cout << "{" << a << "," << b << "," << c << "}" << endl;
    } else if (a > b && a > c && c > b) {
      cout << "{" << a << "," << c << "," << b << "}" << endl;
    } else if (b > a && b > c) {
      cout << "{" << b << "," << a << "," << c << "}" << endl;
    } else if (b > a && b > c && c > a) {
      cout << "{" << b << "," << c << "," << a << "}" << endl;
    } else if (c > a && c > b && a > b) {
      cout << "{" << c << "," << a << "," << b << "}" << endl;
    } else {
      cout << "{" << c << "," << b << "," << a << "}" << endl;
    }
  }

  else {
    cout << "Data Salah" << endl;
  }
  system("pause");
  return 0;
}