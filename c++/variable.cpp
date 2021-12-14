#include <iostream>
using namespace std;
int main(){
    const float ph_i = 22/7;
    int r1, luas;
    cout << "Luas Lingkaran\n";
    cout << "Nilai r : ";
    cin >> r1;
    luas = ph_i * r1 * r1;
    cout << "Hasil : " << luas << endl;
}