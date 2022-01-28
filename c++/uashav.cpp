#include <iostream>
using namespace std;
int main(){
    int harga, harga_bersih, nomor_faktur;
    string nama_pembeli;
    float diskon = 10/100;
    float pajak = 5/100;
    char jenis;

    printf("Pembelian Flashdisk TOKO CICI\n");
    cout << "Nomor Faktur : ";
    cin >> nomor_faktur;
    cout << "Nama Pembeli : ";
    cin >> nama_pembeli;
    cout << "Jenis Flashdisk [H/I/J/K/L] : ";
    cin >> jenis;
    switch (jenis){
        case 'H' : harga=300000; break;
        case 'I' : harga=250000; break;
        case 'J' : harga=200000; break;
        case 'K' : harga=150000; break;
        case 'L' : harga=100000; break;
        default : harga=0;
    }
    if (harga!=0){
        diskon = harga * 10/100;
        pajak = harga * 5/100;
        harga_bersih = harga - diskon + pajak;
        cout << "Harga Flashdisk : " << harga << endl;
        cout << "Diskon : " << diskon << endl;
        cout << "Pajak : " << pajak << endl;
        cout << "Harga Bersih : " << harga_bersih << endl;
    }
}