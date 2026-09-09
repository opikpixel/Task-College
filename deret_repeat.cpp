#include <iostream>
using namespace std;

int main () {
    double S;
    int x;

    S = 0;
    
    do {
        cout << "Masukkan Bilangan (Masukkan 0 untuk berhenti): ";
        cin >> x;
        S = S + (1.0/x);
        cout << "Hasil deret : " << S << endl;
    } while (x != 0 ); 
    
    system ("pause");
    return 0;   
}
