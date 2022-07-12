#include <iostream>
using namespace std;
int main(){
    string nama_barang[100];
    int harga_barang[100];
    bool tambah;
    char y;
    int i=0;
    int total_harga=0;

    printf("=== SWALAYAN SI2P ===\n");
    do {
        cout<<"Nama Barang : ";
        cin>>nama_barang[i];
        cout<<"Harga Barang : ";
        cin>>harga_barang[i];
        total_harga+=harga_barang[i];

        cout << "Masukan Barang? [Y/T] ";
        cin >> y; cout<<endl;
        switch (y){
            case 'Y': tambah = true; i++; break;
            case 'T': tambah = false; continue;
            default : tambah = false; continue;
        }
    } while(tambah && i<100);

    cout<<"Total Harga = "<<total_harga;
}