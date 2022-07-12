#include <iostream>
using namespace std;
int main(){
    string nama_barang[100];
    int harga_barang[100];
    bool tambah;
    int i=0;
    char y;
    int total_harga;

    printf("=== SWALAYAN SI2P ===\n");
    do {
        cout<<"Nama Barang : ";
        cin>>nama_barang[i];
        cout<<"Harga Barang : ";
        cin>>harga_barang[i];

        cout << "Masukan Barang? [Y/T] ";
        cin >> y; cout<<endl;
        switch (y){
            case 'Y': tambah = true; i++; break;
            case 'T': tambah = false; continue;
            default : tambah = true; i++; break;
        }
    } while(tambah);
    
    for(int x=0; x<=i ; x++){
        total_harga+=harga_barang[x];
    }

    printf("Total Harga = %d", total_harga);
}